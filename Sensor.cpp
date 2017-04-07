#include "Sensor.h"

Sensor::Sensor()
{
    update();
}
int Sensor::getSensor()
{
    return sensorData;
}
void Sensor::update()
{
    int fromMAV;
    sensorData = fromMAV;
}