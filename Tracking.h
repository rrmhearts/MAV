/* 
 * File:   Tracking.h
 * Author: Ryan McCoppin
 *
 * Created on May 20, 2010, 8:56 AM
 */

#ifndef _TRACKING_H
#define	_TRACKING_H

#include "Target.h"

class Tracking {
public:
    Tracking();
    void track();

private:
    Target * targ;

};

#endif	/* _TRACKING_H */

