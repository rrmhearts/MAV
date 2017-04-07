/* 
 * File:   Camera.cpp
 * Author: Kathleen Timmerman
 * 
 * Created on March 9, 2010, 9:30 AM
 */

 

//#include "highgui.h"
#include <stdlib.h>
#include <string>

 #include "Camera.h"

Camera::Camera() {
}



Camera::~Camera() {
}

void Camera::locateTarget(){

}


//cvs Camera::getVideoFeed(){
//    return videoFeed;
//}
//void Camera::setVideoFeed(cvs videoFeed){
//    this->videoFeed = videoFeed;
//}
int Camera::getFrameSize(){
    return frameSize;
}
void Camera::setFrameSize(int frameSize){
    this->frameSize = frameSize;
}
int Camera::getFramesSkipped(){
    return framesSkipped;
}
void Camera::setFramesSkipped(int framesSkipped){
    this->framesSkipped = framesSkipped;
}
char* Camera::getMovementDirection(CvCapture*){
    return movementDirection;
}
//void Camera::setMovementDirection(char* movementDirection){
//    this->movementDirection = movementDirection;
//}
int Camera::getTargetLocationX(){
    return targetLocation[0];
}
int Camera::getTargetLocationY(){
    return targetLocation[1];
}
void Camera::setTargetLocation(int targetLocationX, int targetLocationY){
    targetLocation[0] = targetLocationX;
    targetLocation[1]= targetLocationY;
}




