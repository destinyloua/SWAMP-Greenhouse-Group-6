#include "Energy.h"
#include "Device.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // used for parsing string data from file 
#include <Windows.h> // used for Sleep()

using namespace std;

Energy::Energy()
{
	
}



Energy::~Energy()
{
    if (dataFile.is_open()) {
        dataFile.close();
    }

    cout << "EnergyData.txt closed successfully" << endl;
}


