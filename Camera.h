/* 
 * File:   Camera.h
 * Author: Kathleen Timmerman
 *
 * Created on March 9, 2010, 9:30 AM
*/

#ifndef _CAMERA_H
#define	_CAMERA_H

#define CvCapture int

class Camera {
public:
    Camera();
    virtual ~Camera();

    void locateTarget();


    CvCapture* getVideoFeed();
    int getFramesSkipped();
    int getFrameSize();
    int getTargetLocationX();
    int getTargetLocationY();
    char* getMovementDirection(CvCapture*);
    void setVideoFeed(CvCapture*);
    void setFramesSkipped(int);
    void setFrameSize(int);
    void setTargetLocation(int, int);
    //void setMovementDirection(char*);

private:
    CvCapture* videoFeed;
    int framesSkipped;
    int frameSize;
    int targetLocation[2];
    char* movementDirection;


};

#endif	/* _CAMERA_H */

