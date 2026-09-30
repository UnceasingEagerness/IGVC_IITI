import open3d as o3d
import numpy as np

device = o3d.core.Device("CUDA:0")
slam_model = o3d.t.pipelines.slam.Model(0.05, 16, 1000, np.eye(4), device)

intrinsics = o3d.core.Tensor(np.eye(3), dtype=o3d.core.Dtype.Float64, device=o3d.core.Device("CPU:0"))
input_frame = o3d.t.pipelines.slam.Frame(480, 640, intrinsics, device)

color = o3d.core.Tensor(np.zeros((480, 640, 3), dtype=np.uint8), device=device)
depth = o3d.core.Tensor(np.ones((480, 640), dtype=np.uint16) * 1000, device=device)

input_frame.set_data("color", color)
input_frame.set_data("depth", depth)

slam_model.integrate(input_frame, 1000.0, 3.0)

pcd = slam_model.voxel_grid.extract_point_cloud()
print("Has colors:", "colors" in pcd.point)
if "colors" in pcd.point:
    print("Color dtype:", pcd.point["colors"].dtype)
    print("Color max:", pcd.point["colors"].max())
