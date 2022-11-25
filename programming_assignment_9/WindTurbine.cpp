// CS 271 - PA 9
// Program name: WindTurbine.cpp
// Jingru Dou
// 15 April 2021

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cctype>
#include "WindTurbine.h"

using namespace std;

// constructor
WindTurbine::WindTurbine(double p, int b, string o) {
        setPowerOutput(p);
        setBladeSpeed(b);
        setOrientation(o);
} 
    
// three set functions
void WindTurbine::setPowerOutput(double p) { 
    if(p >= 1.0 && p <= 10000.0)
        powerOutput = p;
    else
        powerOutput = 100;
}

void WindTurbine::setBladeSpeed(int b) { 
    if(b >= 0 && b <= 300)
        bladeSpeed = b;
    else
        bladeSpeed = 0;
}

void WindTurbine::setOrientation(string o) { 
    if(o == "vertical" || o == "horizontal")
        orientation = o;
    else
        orientation = "horizontal";
}

// three get functions
double WindTurbine::getPowerOutput() {
    return powerOutput;
}

int WindTurbine::getBladeSpeed() {
    return bladeSpeed;
}

string WindTurbine::getOrientation() {
    return orientation;
}

// output
string WindTurbine::toString() {
    return "WindTurbine: powerOutput = " + to_string(powerOutput) + " kW bladeSpeed = " + to_string(bladeSpeed) + " orientation = " + orientation;
} 
