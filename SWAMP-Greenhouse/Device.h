#pragma once
#include <fstream>

using namespace std;

// Sensors read data from their own file 
class Device
{
	ifstream dataFile;

public:
	Device(const string& fileName);
	~Device();
	virtual double readData();
};
