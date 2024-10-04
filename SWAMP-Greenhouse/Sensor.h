#pragma once
class Sensor
{
};

class Controller {
	int id;
	bool status;

public:
	Controller();
	bool ChangeStatus();
	bool ChangeValue(float value);
};