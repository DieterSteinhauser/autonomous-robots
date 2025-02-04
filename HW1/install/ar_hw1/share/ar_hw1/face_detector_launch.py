from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        
        Node( # usb camera node
            package='usb_cam',
            namespace='usb_cam', # camera.launch.py
            executable='usb_cam_node_exe',
            name='usb_camera_node'
        ),
        Node( # rqt image viewer node
            package='rqt_image_view',
            namespace='rqt_image_view',
            executable='rqt_image_view',
            name='rqt_image_viewer_node'
        ),
        Node( # face detector node
            package='ar_hw1',
            executable='face_detector',
            name='face_detector_node',
            
        )
    ])