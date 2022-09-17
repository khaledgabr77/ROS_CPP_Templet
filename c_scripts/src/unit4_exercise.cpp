/*
Today we are going to introduce a cool instrument of our Rosbot, called the laser.

This instrument is mounted at the top of our robot, it has a rotating mirror 
that sends a beam every few milliseconds and receives the return signal of this beam. 
With that, it is able to calculate the distance from the robot to the objects around it, 
in a range of 360 degrees.
The laser covers the 360 degrees around the robot, and return an array of distances 
where the obstacles are. You are going to use the Rosbot Class function called get_laser() 
to obtain a single reading of the laser in the orientation you desire. 
if you pass as a parameter to the function, the value 0 you will obtain 
the reading from the front, the value 360 will obtain the reading from the back, 
and the value 720 will obtain the reading from the front but a little to the left.

Summarizing, your task will be to:

First ask the rosbot to move forward as many seconds as you want (remember exercise 3.1)
Then call the get_laser(n) function, asking for the two readings 
that you think will delimite the wall from the left to the right. 
Remember that n is the index of a laser beam.
Put those two readings in an array of floats and print them
*/

/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>


int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;

  rosbot.move_forward(3);

  // Get readings
  float right = rosbot.get_laser(121);
  float left = rosbot.get_laser(431);
  
  // Define and assign array values
  float array_laser[] = {left,right};
  // Print array
  ROS_INFO_STREAM("The wall is at " << array_laser[0] << " meters to the left, and at " << array_laser[1] << " meters to the right from the robot ");
  
    
    
  return 0;
}
*/

// -----------------------------------------------

/*
This function called get_laser_full() is a function that returns a pointer 
(see the operator asterisk before the name of the class RosbotClass). 
What it does is take the values of a ROS vector called laser_range and assign them a pointer, 
then return this pointer.

Your task in this exercise will be to modify the unit4_exercise.cpp to do the following tasks:

Make the robot move for many seconds
Initialize and receive a pointer from the function get_laser_full()
Print the values of the array where this pointer points
*/

/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;

  rosbot.move_forward(3);

  float *pointer;

  pointer = rosbot.get_laser_full();
  ROS_INFO_STREAM("Laser values: ");
  for (int i = 0; i < 720; i++) {
    ROS_INFO_STREAM(*pointer);
    pointer++;
  }

  return 0;
}
*/
