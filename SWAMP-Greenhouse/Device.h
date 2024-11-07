#pragma once
#include <fstream>

using namespace std;

class Device
{
protected: 
	string deviceName; 
public:
	Device(string deviceName); // construct each device with a name 
	string getDeviceName();
	virtual void readData(string fileName) = 0; // implement logic for reading from txt file - will be different for each device 
	virtual void control() = 0; // implement control logic - will be different for each device 
	~Device() = default; 
};
