#pragma once
// Humidity header file
#include "Sensor.h"

class Humidity : public Device {
	double currentHumidity;
	double minHumidity;
	double maxHumidity;
public:
	Humidity();
	void logData();
};
