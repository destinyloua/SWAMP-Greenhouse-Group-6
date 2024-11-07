#pragma once
#include <fstream>

using namespace std;

// Devices read data from their own file 
class Device
{
	ifstream dataFile;

public:
	Device(const string& fileName);
	~Device();
	virtual double readData();
};
