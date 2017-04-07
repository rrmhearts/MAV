/* 
 * File:   VideoFeed.cpp
 * Author: Kathleen Timmerman
 * 
 * Created on March 9, 2010, 9:39 AM
 */

#include "VideoFeed.h"

VideoFeed::VideoFeed() {
}



VideoFeed::~VideoFeed() {
}

int VideoFeed::getDistance(){
    return distance;
}

void VideoFeed::setDistance(int distance){
    this->distance = distance;
}

int VideoFeed::getIdealDistance(){
    return idealDistance;
}

void VideoFeed::setIdealDistance(int idealDistance){
    this->idealDistance = idealDistance;
}

int VideoFeed::getSeperation(){
    return seperation;
}

void VideoFeed::setSeperation(int seperation){
    this->seperation = seperation;
}

void VideoFeed::createCamera1(){

}

void VideoFeed::createCamera2(){

}

void VideoFeed::createTarget(int, int){

}

void VideoFeed::createTarget(int, int, int, int){
    
}
