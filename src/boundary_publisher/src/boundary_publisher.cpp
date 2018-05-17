//'{header: {stamp: now, frame_id: "map"}, pose: {position: {x: 1.0, y: 0.0, z: 0.0}, orientation: {w: 1.0}}}
#include <ros/ros.h>
#include "geometry_msgs/PointStamped.h"
#include "geometry_msgs/Point.h"
#include "std_msgs/Header.h"
#include <math.h>
#include <iostream>


 
 int main(int argc, char **argv)
 {
   ros::init(argc, argv, "Boundary_publisher");

   ros::NodeHandle n;
   
 
   ros::Publisher pub = n.advertise<geometry_msgs::PointStamped>("/clicked_point", 1);
   geometry_msgs::PointStamped Point;
   
   Point.header.seq = 0;
   Point.header.frame_id = "map";
   Point.point.x = 0.0;
   Point.point.y = 0.0;
   Point.point.z = 0.0; 
   pub.publish(Point);
   ROS_INFO("Seq: [%d]", Point.header.seq);
   ROS_INFO("Posicion-> x: [%f], y: [%f], z: [%f]", Point.point.x,Point.point.y, Point.point.z);
   ros::Duration(0.5).sleep(); // sleep for half a second
   
   Point.header.seq = 1;
   Point.header.frame_id = "map";
   Point.point.x = 1.0;
   Point.point.y = -1.0;
   Point.point.z = 0.0; 
   pub.publish(Point);
   ROS_INFO("Seq: [%d]", Point.header.seq);
   ROS_INFO("Posicion-> x: [%f], y: [%f], z: [%f]", Point.point.x,Point.point.y, Point.point.z);
   ros::Duration(0.5).sleep(); // sleep for half a second
   
   
   Point.header.seq = 2;
   Point.header.frame_id = "map";
   Point.point.x = 1.0;
   Point.point.y = -9.0;
   Point.point.z = 0.0; 
   pub.publish(Point);
   ROS_INFO("Seq: [%d]", Point.header.seq);
   ROS_INFO("Posicion-> x: [%f], y: [%f], z: [%f]", Point.point.x,Point.point.y, Point.point.z);
   ros::Duration(0.5).sleep(); // sleep for half a second
   
   
   Point.header.seq = 3;
   Point.header.frame_id = "map";
   Point.point.x = 9.0;
   Point.point.y = -9.0;
   Point.point.z = 0.0; 
   pub.publish(Point);
   ROS_INFO("Seq: [%d]", Point.header.seq);
   ROS_INFO("Posicion-> x: [%f], y: [%f], z: [%f]", Point.point.x,Point.point.y, Point.point.z);
   ros::Duration(0.5).sleep(); // sleep for half a second
   
   
   Point.header.seq = 4;
   Point.header.frame_id = "map";
   Point.point.x = 9.0;
   Point.point.y = -1.0;
   Point.point.z = 0.0; 
   pub.publish(Point);
   ROS_INFO("Seq: [%d]", Point.header.seq);
   ROS_INFO("Posicion-> x: [%f], y: [%f], z: [%f]", Point.point.x,Point.point.y, Point.point.z);
   ros::Duration(0.5).sleep(); // sleep for half a second

   Point.header.seq = 5;
   Point.header.frame_id = "map";
   Point.point.x = 1.0;
   Point.point.y = -1.0;
   Point.point.z = 0.0; 
   pub.publish(Point);
   ROS_INFO("Seq: [%d]", Point.header.seq);
   ROS_INFO("Posicion-> x: [%f], y: [%f], z: [%f]", Point.point.x,Point.point.y, Point.point.z);
   ros::Duration(0.5).sleep(); // sleep for half a second
  
   Point.header.seq = 6;
   Point.header.frame_id = "map";
   Point.point.x = 5.0;
   Point.point.y = -5.0;
   Point.point.z = 0.0; 
   pub.publish(Point);
   ROS_INFO("Seq: [%d]", Point.header.seq);
   ROS_INFO("Posicion-> x: [%f], y: [%f], z: [%f]", Point.point.x,Point.point.y, Point.point.z);
   ros::Duration(0.5).sleep(); // sleep for half a second
   
   
  return 0;
}
