import pyrealsense2 as rs
import numpy as np
import cv2

def run_lane_detection():
    print("Starting RealSense pipeline...")
    pipeline = rs.pipeline()
    config = rs.config()

    # Enable color stream
    config.enable_stream(rs.stream.color, 640, 480, rs.format.bgr8, 30)

    try:
        pipeline.start(config)
        print("Camera started! Press 'q' on the image window to quit.")
        
        while True:
            frames = pipeline.wait_for_frames()
            color_frame = frames.get_color_frame()
            if not color_frame:
                continue

            # Convert to numpy array
            cv_image = np.asanyarray(color_frame.get_data())

            # 1. Color Thresholding for Black Tape (Copied from your lane_detector.py)
            hsv = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
            
            lower_black = np.array([0, 0, 0])
            upper_black = np.array([180, 255, 50])
            mask = cv2.inRange(hsv, lower_black, upper_black)
            
            # 2. Find contours
            contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
            
            # Draw contours on the original image for visualization
            result_image = cv_image.copy()
            for contour in contours:
                if cv2.contourArea(contour) > 50:
                    cv2.drawContours(result_image, [contour], -1, (0, 255, 0), 2)
                    
                    # Draw sampled points like your ROS node does
                    for i in range(0, len(contour), 5):
                        pt = contour[i][0]
                        cv2.circle(result_image, (pt[0], pt[1]), 3, (0, 0, 255), -1)

            # Show images
            cv2.imshow('Original Image & Detected Lanes (Green/Red)', result_image)
            cv2.imshow('Black Tape Mask', mask)
            
            # Break on 'q' press
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

    except Exception as e:
        print(f"Error: {e}")
    finally:
        pipeline.stop()
        cv2.destroyAllWindows()

if __name__ == "__main__":
    run_lane_detection()
