#pragma once
#include <fstream>

using namespace std;

// Sensors read data from their own file 
class Sensor
{
	ifstream dataFile;

public:
	Sensor(const string& fileName);
	~Sensor();
	virtual double readData();
};
