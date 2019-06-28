/*
 * read_node.cpp
 *
 *  Created on: Aug 7, 2014
 *      Author: Péter Fankhauser
 *   Institute: ETH Zurich, Autonomous Systems Lab
 */

#include <ros/ros.h>
#include "point_cloud_io/Read2.hpp"

int main(int argc, char** argv)
{
  ros::init(argc, argv, "read");
  ros::NodeHandle nodeHandle("~");

  point_cloud_io::Read2 read(nodeHandle);

  ros::spin();
  return 0;
}
