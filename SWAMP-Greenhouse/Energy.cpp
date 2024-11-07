#include "Energy.h"
#include <iostream>

using namespace std;

Energy::Energy()
{
	deviceName = "Energy Manager";
	isActive = true;
	watts = 0.0;
	fileName = "EnergyData.txt"; // name of simulation data file 
}


