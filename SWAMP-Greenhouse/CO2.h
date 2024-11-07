#pragma once
#include "Device.h"
#include <iostream>
#include <fstream>
using namespace std;

class CO2: public Device
{
	double CO2Value; 
	bool isDanger; 
	string fileName; 

public:
	CO2();
	void readData() override; 
	void control() override; 
	string displayWarning(); 
	~CO2();

};

