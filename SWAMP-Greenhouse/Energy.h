#pragma once
#include <vector>
#include <fstream>
#include "Device.h"
// for managing energy consumption

class Energy
{
	double watts; 
	fstream fileName; 

public:
	Energy();
	~Energy(); 

};

