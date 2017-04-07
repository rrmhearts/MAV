/* 
 * File:   Sensor.h
 * Author: Goshikku
 *
 * Created on May 20, 2010, 8:53 AM
 */

#ifndef _SENSOR_H
#define	_SENSOR_H

class Sensor
{
public:
    Sensor();
    getSensor();

private:
    int sensorData;
    void update();
};

#endif	/* _SENSOR_H */

