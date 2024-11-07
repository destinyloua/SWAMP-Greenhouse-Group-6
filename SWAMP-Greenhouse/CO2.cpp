#include "CO2.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std; 

// Initialize with default values
CO2::CO2()
{
    deviceName = "CO2 Sensor";
    isActive = true; 
	CO2Value = 0.0;
	isDanger = false; 
	fileName = "CO2Data.txt"; // name of simulation data file 
}

void CO2::readData()
{
    // open file 
    dataFile.open(fileName);
    if (!dataFile) {
        cerr << "Error opening file: " << fileName << endl;
        return;
    }

    // get data from each line
    string line;
    while (getline(dataFile, line)) {
        stringstream ss(line);
        double value;
        ss >> value; // turn string into double value 

    if (ss.fail()) {
        cerr << "Error reading value from line: " << line << endl;
        return;
        }

    CO2Value = value;
    if(CO2Value > 1500 || CO2Value < 1000){
        isDanger = true;
        cout << "CO2 Value: " << CO2Value << " ppm, Danger!!!! " << endl;
    }
    else{
        cout << "CO2 Value: " << CO2Value << " ppm" << endl;
    }
       
    }
}

void CO2::control()
{
    cout << "CO2 is monitor only" << endl; 
}

CO2::~CO2()
{
	if (dataFile.is_open()) {
		dataFile.close(); 
	}

    cout << "CO2Data.txt closed successfully" << endl; 
}
