#include "Sensor.h"

class SoilMoisture : public Sensor {
public:
	SoilMoisture();
	double readData();
};