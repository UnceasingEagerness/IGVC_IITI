import pyrealsense2 as rs
import numpy as np
import time

def check_imu():
    print("Checking for connected RealSense devices...")
    ctx = rs.context()
    devices = ctx.query_devices()
    if len(devices) == 0:
        print("[ERROR] No RealSense devices found! Please ensure it is plugged in.")
        return

    for i, dev in enumerate(devices):
        print(f"Device {i+1}: {dev.get_info(rs.camera_info.name)} (USB {dev.get_info(rs.camera_info.usb_type_descriptor)})")

    print("\nSetting up RealSense pipeline...")
    pipeline = rs.pipeline()
    config = rs.config()
    pipeline_started = False

    try:
        # Enable IMU streams: Accelerometer and Gyroscope
        # The D455 typically supports 250Hz for accel and 200Hz or 400Hz for gyro
        print("Configuring IMU streams (Default configuration)...")
        config.enable_stream(rs.stream.accel)
        config.enable_stream(rs.stream.gyro)

        # Start streaming
        print("Starting pipeline...")
        profile = pipeline.start(config)
        pipeline_started = True
        
        print("\nPipeline started successfully. Looking for IMU data...")
        print("Will print 10 samples and then exit.\n")
        
        samples = 0
        while samples < 10:
            # Wait for frames
            frames = pipeline.wait_for_frames()
            
            # Extract IMU frames
            accel_frame = frames.first_or_default(rs.stream.accel)
            gyro_frame = frames.first_or_default(rs.stream.gyro)
            
            if accel_frame and gyro_frame:
                accel_data = accel_frame.as_motion_frame().get_motion_data()
                gyro_data = gyro_frame.as_motion_frame().get_motion_data()
                
                print(f"Sample {samples + 1}/10:")
                print(f"  [Accel] x: {accel_data.x:8.4f}, y: {accel_data.y:8.4f}, z: {accel_data.z:8.4f} (m/s^2)")
                print(f"  [Gyro]  x: {gyro_data.x:8.4f}, y: {gyro_data.y:8.4f}, z: {gyro_data.z:8.4f} (rad/s)")
                print("-" * 50)
                
                samples += 1
                time.sleep(0.5) # Just to slow down the output so it's readable

    except RuntimeError as e:
        print(f"\n[ERROR] Could not start pipeline. Make sure the D455 is plugged in and no other process is using it.")
        print(f"Details: {e}")
    except Exception as e:
        print(f"\n[ERROR] An unexpected error occurred: {e}")
    finally:
        if pipeline_started:
            print("Stopping pipeline...")
            pipeline.stop()

if __name__ == "__main__":
    check_imu()
