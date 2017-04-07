/* 
 * File:   Navigation.h
 * Original Author: Ryan McCoppin
 *
 * Makes decisions on navigation based on sensor data and target location.
 * Informs Flight exactly where to move next.
 * 
 * Created on May 20, 2010
 */

#ifndef _NAVIGATION_H
#define	_NAVIGATION_H

#include "State.h"
#include "Sensor.h"

class Navigation {
public:
    Navigation();
    virtual ~Navigation();

    State navigate(int[]);

    void readAltitude();
    void readRightDistance();
    void readLeftDistance();

    //Variable set and get functions
    void setAltitude(int);
    void setIdealAltitude(int);
    void setMaxAltitude(int);
    void setObjectDistance(int);
    void setObjectDirection(int);
    
    int getAltitude();
    int getIdealAltitude();
    int getMaxAltitude();
    int getObjectDistance();
    int getObjectDirection();

private:

    Sensor * sense;
    int idealAltitude;
    int maximumAltitude;
    int currentAltitude;

    int objectDistance;
    int objectDirection;
};

#endif	/* _NAVIGATION_H */

