#pragma once
#include <fstream>

using namespace std;

class Device
{
protected: 
	string deviceName; 
public:
	Device(string deviceName); // construct each device with a name 
	~Device();
	virtual void readData(string fileName); // implement logic for reading from txt file - will be different for each device 
	virtual void control(); // implement control logic - will be different for each device 
};
