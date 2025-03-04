
# ROS2 Notes
Dieter Steinhauser

Trevor Free

3/4/2025

University of Florida - Autonomous Robots


# Project and Package Creation


## Folder Structure
Root 
-   Project 
    -    Build 
    -   Workspace (src) 
        -   Package 
            -   Node Files


## Folder Structure Example
AutonomousRobots 
-   HW3 (Project)
    -   Build 
    -   src (workspace packages)
        -   ar_hw3 (package)
            -   package.xml
            -   setup.cfg
            -   setup.py
            -   license

            -   turtle_spiral (Node Files)
                -   __init__.py
                -   turtle_spiral.py




### Create the Root, Project and Workspace folders, src is the standard workspace name


`cd <root-folder>`

`mkdir -p /<project_folder_name>/src`

### Create a package while in the Workspace src folder

`ros2 pkg create --build-type ament_python --license Apache-2.0 <desired-package-name>`

### Add your code to node files next to the __init__.py file in /package_name/package_name folder

# Add dependencies from code to package.xml

`<depend>[name_of_dependency]<depend>`

e.g. 

`<depend>std_msgs</depend>`

### add entry points to setup.py

`'<common_name> = package_name.node_file_name:function_name'`

e.g.

`'turtle_spiral = ar_hw3.turtle_spiral:main',`

### Check setup.cfg and see if there are any errors

### download dependencies at the project folder 
`rosdep install -i --from-path src --rosdistro humble -y`

## Build your package
`colcon build --packages-select <package_name>`


## How to Use the Package After Building

### Navigate to the project directory
`cd <project-name>`

### source package
`source install/setup.bash`

### run the node
`ros2 run <package_name> <node_file_name>`

e.g.  

`ros2 run ar_hw3 turtle_spiral`


## Extra Useful Commands

`lsusb`

`ros2 topic list`

### Turn on the usb_cam
`ros2 launch usb_cam camera.launch.py`

### Turn on the rqt image viewer to observe camera pre and post processing
`ros2 run rqt_image_view rqt_image_view`

### Turn on the face detector node that subscribes to the camera topic and publishes the computed data to a new topic.
`ros2 run ar_hw1 face_detector`







