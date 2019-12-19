//
// Created by eldar on 19.12.2019.
//

#include "ros/ros.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "robot_server");
    ROS_INFO("Hello, world!");
    ros::shutdown();
    return EXIT_SUCCESS;
}
