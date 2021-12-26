#include <ros/ros.h>

int main(int argc, char **argv)
{
    // Initialize the ros system
    ros::init(argc, argv, "hello_ros");

    // Establish this progam as ROS node
    ros::NodeHandle nh;

    // send some output as log messages
    ROS_INFO_STREAM("Hello, ROS!");

}
