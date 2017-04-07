/* 
 * File:   Target.h
 * Author: Kathleen Timmerman
 *
 * Created on March 9, 2010, 8:40 AM
 *
 * This class is designed to hold information about a target.  The target
 * can have a height, width, depth, and prominate color.
 *
 * ******************************************************************
 * Please use this area to document bugs, suggestions, and updates:
 *
 *
 *
 * ******************************************************************
 */

#ifndef _TARGET_H
#define	_TARGET_H

class Target {
public:
    Target();
    Target(int, int);
    Target(int,int,int,int);
    virtual ~Target();

    void setHeight(int);
    void setWidth(int);
    void setDepth(int);
    void setColor(int);

    int getHeight();
    int getWidth();
    int getDepth();
    int getColor();


private:
    int height;
    int width;
    int depth;
    int color;

};

#endif	/* _TARGET_H */

