#pragma once
#include <fstream>

using namespace std;

class Device
{
protected: 
	string deviceName; 
	bool isActive;
public:
	Device(); // default device constructor
	string getDeviceName();
	virtual void readData(string fileName) = 0; // implement logic for reading from txt file - will be different for each device 
	virtual void control() = 0; // implement control logic - will be different for each device 
	~Device() = default; 
};
