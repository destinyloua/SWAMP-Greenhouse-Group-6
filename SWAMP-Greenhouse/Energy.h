#pragma once
#include "Device.h"
// for managing energy consumption

class Energy: public Device
{
	double watts;
	string fileName;

public:
	Energy();
	//void readData() override; 
	//void control() override; 

};

