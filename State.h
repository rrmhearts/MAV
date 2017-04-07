/* 
 * File:   State.h
 * Author: Ryan McCoppin
 *
 * State packet that can be passed between objects. State of MAV or state of target.
 * 
 * Created on May 20, 2010, 8:55 AM
 */

#ifndef _STATE_H
#define	_STATE_H

class State
{
public:
    State();
    int getState();
    int getPosition();

    void setState(int);
    void setPosition(int);
private:
    int state;
    int position;
};


#endif	/* _STATE_H */

