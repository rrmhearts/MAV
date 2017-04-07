/* 
 * File:   Flight.cpp
 * Author: Kathleen Timmerman
 * 
 * Created on March 9, 2010, 8:53 AM
 *
 * see Flight.h for overview
 */

#include "Flight.h"
#include "State.h"
//#include "Lydia.h"

Flight::Flight(int ceilingHeight) {
    path = new Navigation();
    thrust = 0; yaw = 0; roll = 0; pitch = 0;
    path->setMaxAltitude(ceilingHeight);

}

Flight::~Flight() {
}

bool Flight::init()
{
    //Check controls to make sure everything is working properly. 
    //May check sensors here or in Navigation constructor. Navigation returns if it can fly up
    int ideal = path->getMaxAltitude()/2;
    path->setIdealAltitude(ideal);
    //Takeoff, set to default height
    State initialState = path->navigate(/*UP*/new int[3]);
    command(initialState);
    //Fly stabilized

    return true;
}
/*  This function tells the aircraft to continue to follow the target.
    It will return true as long as there have been no issues.
    It will return false if the plane has encountered a problem and needs to quit flying
 */
bool Flight::follow(){
    State here = path->navigate(new int[2]);
    goTo(here);
}

void Flight::goTo(State point)
{
    
}

//Tell MAV exactly what to do in response to Navigation instruction
bool Flight::command(State)
{
    //Most importantly, keep the MAV stable while following out instructions
    //stabilize()
    return true;
}

//Could call after each function. after state change is complete, re-stabilize
//so that mav is flying level
bool Flight::stabilize()
{
    //Check sensor data, correct
    //Do we know rotor speeds? equilize speeds?
    //Check ideal height, current height, adjust thrust
    return true;
}

bool Flight::moveNorth(int /*Mabe State*/ ){
    //Call command with proper arguments
    bool noProblems = true;
    return noProblems;
}

bool Flight::moveSouth(int){
    bool noProblems = true;
    return noProblems;
}

bool Flight::moveEast(int){
    bool noProblems = true;
    return noProblems;
}

bool Flight::moveWest(int){
    bool noProblems = true;
    return noProblems;
}

bool Flight::moveUp(int){
    bool noProblems = true;
    thrust++;
    //Increase thrust if roll and pitch are neutral
    return noProblems;
}

bool Flight::moveDown(int){
    bool noProblems = true;
    return noProblems;
}

bool Flight::moveForward(int)
{
    return true;
}

bool Flight::turnRight(int)
{
    return true;
}

bool Flight::turnLeft(int)
{
    return true;
}

//bool Lydia::awesome()
//{
//
//    return true;
//}
