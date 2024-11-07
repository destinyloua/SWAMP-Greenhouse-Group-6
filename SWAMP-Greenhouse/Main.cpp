// CSCN72030 - Project III
// Aiden, Destiny, Liam, Tyler
// The SWAMP 

#include "raylib.h" // make sure you have raylib installed 
#include <iostream>
#include <vector>
#include "Device.h"
#include "CO2.h"

using namespace std;

int main() {

	// create the collection of devices 
	vector<Device*> devices;
	
	// adding devices to the system 
	devices.push_back(new CO2());
	
	// testing devices 
	for (Device* device: devices) {
		cout << "Testing " << device->getDeviceName() << endl; 
		device->readData();
		device->control();
	}

	// clean up devices 
	for (Device* device : devices) {
		delete device; 
	}


	return 0; 
}