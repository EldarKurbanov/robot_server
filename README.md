# robot_server
 The server for an robot on ROS Melodic

# How to run it?
 1) Install ROS Melodic
 2) Create your ros_workspace with a catkin if you didn't it.
    For example:
    mkdir -p ros_workspace/src && cd ros_workspace
    catkin_make
 3) Clone this repository to the src forlder in ros_workspace
 4) Run CLion from Terminal (it's important! because the .bashrc has lines with catkin init)
 5) Open cloned repository as project in CLion
 6) CLion will alert you that some of packages in find_package on CMakeLists.txt not found. Don't worry, just sudo apt install ros-melodic-package-name (i.e ros-melodic-async-web-server-cpp)
 7) If CLion will says you that package catkin not found, it probably means that in .bashrc there is no commands for init catkin. In my .bashrc it looks like this:
  \# Virtual Environment Wrapper
  alias workoncv-master="source /home/eldar/OpenCV-master-py3/bin/activate"
  source /opt/ros/melodic/setup.bash

 8) Reload your CMake project until it reloads successfully on your computer
 9) Pick configuration robot_server_node | debug near Run button on CLion
 10) Run it and enjoy!
