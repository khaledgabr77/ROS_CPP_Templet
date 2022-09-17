/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");
  
  //Get a X_pos of Robot
  RosbotClass rosbot;
  rosbot.move();

  float coordinate = rosbot.get_position(1);

  ROS_INFO_STREAM(coordinate);

  return 0;
}
*/ 

//------------------------------------------------------

/*
First, you'll take the same script we are using (unit1_exercise.cpp) and modify it to take these actions:
Get the x and y coordinates of the robot by calling twice at the function get_position() and print them together
(Hint: remember to give different names to the results of x and y)
Make the robot move by calling the function move(), which needs no parameters, and gives no results.
Get the new x and y coordinates of the robot.
*/
/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  float x_1 = rosbot.get_position(1);
  float y_1 = rosbot.get_position(2);

  ROS_INFO_STREAM(x_1 << " and " << y_1);

  rosbot.move();

  float x_2 = rosbot.get_position(1);
  float y_2 = rosbot.get_position(2);

  ROS_INFO_STREAM(x_2 << " and " << y_2);

  return 0;
}

*/

//-------------------------------------------------------
/*In this exercise we are going to create a dictionary that will store the x position of the robot over time, 
and print it in the shell.

First, modify the script unit1_exercise.cpp of the previous exercise to get the x coordinate of the robot by calling
the get_position() function, and also get the time of simulation by calling the get_time() function. 
(Hint: the timestamp will have a data type of double)

Then, make the robot move by calling the function move()

Repeat step 1: take the x position and the timestamp

Instead of printing them in the shell, you will initialize a dictionary and store the time obtained as a key, 
and the x position as a value. Do it for all the values you obtained of x, 1 time, 2 times, .. , as many as you want.

Print the dictionary with the code provided in the Dictionaries section.
*/

/*
#include "rosbot_control/rosbot_class.h"
#include <iostream>
#include <list>
#include <map>
#include <ros/ros.h>
#include <string>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  float x_0 = rosbot.get_position(1);
  double t_0 = rosbot.get_time();

  ROS_INFO_STREAM(x_0 << " and " << t_0);
  rosbot.move();

  float x_1 = rosbot.get_position(1);
  double t_1 = rosbot.get_time();
  ROS_INFO_STREAM(x_1 << " and " << t_1);

  map<double, float> x_t_dictionary;
  x_t_dictionary[t_0] = x_0;
  x_t_dictionary[t_1] = x_1;

  for (auto item : x_t_dictionary) {
    ROS_INFO_STREAM("Time " << item.first << ", position " << item.second
                            << " \n");
  }

  return 0;
}
*/

//------------------------------------------------------
/*
Let's try a final exercise to put in practice the operators in C++. In this exercise you are going to reuse the code from the previous one, so open the IDE, go to the folder /catkin_ws/src/cpp_course_repo/c_scripts/src and edit your previous unit1_exercise.cpp.

This script now has to perform three actions:

First obtain the measure of time and position x with the functions get_time() and get_position(), and store them in variables. Then make the robot move, and obtain again the time and position x storing them in different variables.

Second, calculate the mean speed of the robot in that period, by applying the formula
v = (x2 - x1) / (t2 -t1)
 
Third, print (using ROS_INFO_STREAM) a True value if the mean speed is lower than 1 m/s 
*/
/*
#include "rosbot_control/rosbot_class.h"
#include <iostream>
#include <ros/ros.h>

using namespace std;

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  rosbot.move();

  float x_0 = rosbot.get_position(1);
  double t_0 = rosbot.get_time();

  rosbot.move();

  float x_1 = rosbot.get_position(1);
  double t_1 = rosbot.get_time();

  float speed = (x_1 - x_0)/(t_1 - t_0); 
  ROS_INFO_STREAM("Speed is lower than 1 m/s? " << (speed<=1.0) << "\n")


  return 0;
}
*/