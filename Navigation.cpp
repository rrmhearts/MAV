/* 
 * File:   Navigation.cpp
 * Author: Kathleen Timmerman
 * 
 * Created on March 9, 2010, 8:59 AM
 */

#include "Navigation.h"

Navigation::Navigation() {
    sense = new Sensor();
}

Navigation::~Navigation() {
}

//Give state change to Flight for implementation
State Navigation::navigate(int arr[])
{
    State s;
    if (getObjectDistance() <= 10)
    {
        int badDirection = getObjectDirection();
        //Go opposite way
    }
    return s;
}

void Navigation::setMaxAltitude(int maxalt)
{

}

int Navigation::getMaxAltitude()
{
    return 0;
}

void Navigation::setIdealAltitude(int ideal)
{

}

int Navigation::getObjectDirection()
{
    return 0;
}

int Navigation::getObjectDistance()
{
    return 0;
}
