/*
You are going to implement an if statement that, after receiving the x position of the robot.
In order to do so:

Open the IDE, and inside the folder /c_scripts/src/ open the file unit2_exercise.cpp. 
Take the unit1_exercise.cpp as an example for the structure of the code.

Use the function move_forward(s) to move the robot. 
Pass as a parameter s the number of seconds you want it to move.

Use the value X_limit that you desire in the if condition

Use the function stop_moving() to stop the robot

Use the function move_backwards(s) to move backwards, passing the number of seconds you want it to move. 
When it is finished, make the robot stop with stop_moving().
*/ 

/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  
  rosbot.move_forward(5.0);

  float X_limit = 10.0;
  float x = rosbot.get_position(1);
  ROS_INFO_STREAM("X reached: " << x);
 
  if (x >= X_limit) {
      rosbot.stop_moving();
  } else {
      rosbot.move_backwards(5.0);
      rosbot.stop_moving();
  }

  return 0;
}
*/

// ------------------------------------------------------

/*
Modify the unit2_exercise.cpp code to admit a while loop.
Keep in mind that inside the while loop the value of x needs to be updated every time,
by calling the function get_position().
*/

/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  
  rosbot.move_forward(5.0);

  float X_limit = 10.0;
  float x = rosbot.get_position(1);
  ROS_INFO_STREAM("X reached: " << x);
 
  while (x < X_limit) {
      x = rosbot.get_position(1);
      rosbot.move_backwards(5.0);

  }
  rosbot.stop_moving();

  return 0;
}
*/

// -----------------------------------------------------

/*
Let's use a list in our robot script. First, modify the script unit2_exercise.cpp to only 
perform three actions:

Make the robot move with the function move() for as many seconds as you wish
Call the function get_position_full() to obtain a list with the coordinates
Use a for loop to print the coordinates
*/

/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  list<float> list_coordinates;
  list_coordinates = rosbot.get_position_full();
  for (float coordinate : list_coordinates) {
    ROS_INFO_STREAM(coordinate << ", ");
  }

  return 0;
}
*/

// -------------------------------------------------------------

