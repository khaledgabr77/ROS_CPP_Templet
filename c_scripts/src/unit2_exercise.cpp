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

/*
Let's put all that to work!!

First, open the IDE again, and inside the folder /c_scripts/src/ open the file unit3_exercise.cpp. 
Take the unit2_exercise.cpp as an example for the structure of the code.

Create a function outside the main method that accepts as a parameter the object rosbot, 
of type RosbotClass, and an integer called n_secs. This function has to be called move_and_inform, 
and has to return a list with two floats: the new x and y coordinates of the robot.

To do this, put inside the function the actions of moving forward for n_secs seconds 
and then read the x,y position of the robot.
*/

/*
#include "rosbot_control/rosbot_class.h"
#include <ros/ros.h>
#include <list>
using namespace std;

list<float> move_and_inform( RosbotClass rosbot, int n_secs) {
    
    rosbot.move_forward(n_secs);
    float x = rosbot.get_position(1);
    float y = rosbot.get_position(2);
    
    list<float> list_coordinates({x,y});
    
    return list_coordinates;
}



int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;
  
  list<float> list_coordinates = move_and_inform(rosbot,5.0);
  for (float coord : list_coordinates) {
    cout << coord << ", ";
  }
  
    
  return 0;
    
}
*/

// ----------------------------------------------------

/*
For the following exercise, we are going to introduce a new function:

turn (clockwise,n_secs): This function allows you to turn the robot. 
You will need to pass two parameters to it.
clockwise: Specify here whether you want your robot to turn clockwise ("clockwise") 
or counter-clockwise ("counterclockwise").
n_secs: Specify here how long you want to robot to keep turning (in seconds).
This function will print a message after the movement is succesful.
*/

/*
Then, open the IDE again, and inside the folder /c_scripts/src/ modify the file unit3_exercise.cpp.

Inside this new file create a function that will contain your desired trajectory. 
Remember that this function has to take as input parameter the rosbot object. 
Make the robot move around the world, using the functions move_forward(n_secs) and 
turn(clockwise,n_secs) to bring it from inside the kitchen (on the left) 
to the exit door (on the right).
*/

/*
#include "rosbot_control/rosbot_class.h"
#include <list>
#include <ros/ros.h>
#include <string>
using namespace std;

string trajectory(RosbotClass rosbot) {
  rosbot.turn("clockwise", 3);
  cout << "Turn completed " << endl;
  rosbot.move_forward(2.0);
  cout << "Move completed" << endl;
  rosbot.turn("counterclockwise", 3);
  cout << "Turn completed" << endl;
  rosbot.move_forward(10.0);
  rosbot.turn("clockwise", 2);
  rosbot.move_forward(3.0);

  string message = "Trajectory was succesful!!";
  return message;
}

int main(int argc, char **argv) {
  ros::init(argc, argv, "rosbot_node");

  RosbotClass rosbot;

  string m = trajectory(rosbot);
  cout << m << endl;

  return 0;
}
*/