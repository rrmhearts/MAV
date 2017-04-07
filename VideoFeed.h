/* 
 * File:   VideoFeed.h
 * Author: Kathleen Timmerman
 *
 * This Class handles the multiple cameras as well as the target
 *
 * Created on March 9, 2010, 9:39 AM
 */



#ifndef _VideoFeed_H
#define	_VideoFeed_H


class VideoFeed {
public:
    VideoFeed();
    virtual ~VideoFeed();

    int getSeperation();
    int getIdealDistance();
    int getDistance();
    void setSeperation(int);
    void setIdealDistance(int);
    void setDistance(int);
    void createTarget(int, int);
    void createTarget(int,int,int,int);
    void createCamera1();
    void createCamera2();
private:
    // holds the amount of change in each direction
    //[north, south, east, west, up, down]
    int locationChange[6];
    int seperation;
    int idealDistance;
    int distance;

};

#endif	/* _VideoFeed_H */

