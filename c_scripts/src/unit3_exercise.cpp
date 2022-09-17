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