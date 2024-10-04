#pragma once
// for managing energy consumption

class Energy
{
	double watts;

public:
	Energy();
	double getUsage();
	void optimizeUsage(double watts);
	void displayUsage();
};

