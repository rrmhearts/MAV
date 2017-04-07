/*
 * File:   Flight.h
 * Author: Kathleen Timmerman
 * Author: Ryan McCoppin
 * Author: Lydia Bachochin
 *
 * Created on March 9, 2010, 8:53 AM by Kathleen Timmerman
 * Updated from May 20, 2010 by Ryan McCoppin
 *
 * Flight is a class designed for a aircraft to fly autonomiously
 * by following a target around.
 *
 * Every Flight will a target to follow. In order to follow this target, the
 * Navigation class is used to decide where to move. The Flight class actually
 * moves the MAV.
 *
 * After a flight is created.  The user calls follow which will follow the
 * target, returning true as long as there were no flight issues.
 *
 * To use this class the following classes are required:
 * Navigation.cpp
 *
 * Expected use of this class:
 *  Flight flight = new Flight();
 *  bool cont = true;
 *  while(cont)
 *      cont = flight.follow();
 *  flight.~Flight();
 *
 * Functions governing movement will send dat to the MAV through assembly or
 * something similar. Possibly bytes of data.
 * ******************************************************************
 * Please use this area to document bugs, suggestions, and updates:
 *
 * 
 *
 * ******************************************************************
 */



#ifndef _FLIGHT_H
#define	_FLIGHT_H

#include "State.h"
#include "Navigation.h"

class Flight {
public:
    Flight();
    Flight(int);
    virtual ~Flight();

    bool init();
    bool follow();
    void goTo(State);



private:
    int thrust;
    int pitch;
    int yaw;
    int roll;
    
    Navigation * path;
    bool command(State);
    bool stabilize();

    bool moveNorth(int);
    bool moveSouth(int);
    bool moveEast(int);
    bool moveWest(int);

    bool moveUp(int);
    bool moveDown(int);
    bool moveForward(int);
    bool turnRight(int);
    bool turnLeft(int);

};

#endif	/* _FLIGHT_H */

