#include "Energy.h"
#include <iostream>

using namespace std;

Energy::Energy()
{
    watts = 0;
}

double Energy::getUsage()
{
    return watts;
}

void Energy::optimizeUsage(double watts)
{
    this->watts = watts;
}

void Energy::displayUsage()
{
    cout << "Current energy consumption: " << watts << " watts." << endl;
}
