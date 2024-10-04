#pragma once
#include <fstream>

using namespace std;

class Sensor
{
	ifstream dataFile;

public:
	Sensor(const string& fileName);
	~Sensor();
	double readData();
	void control();
};

