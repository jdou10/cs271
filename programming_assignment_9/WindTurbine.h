// CS 271 - PA 9
// Program name: WindTurbine.h
// Jingru Dou
// 15 April 2021

#ifndef WINDTURBINE_H
#define WINDTURBINE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cctype>

using namespace std;

class WindTurbine {

    private:
        double powerOutput;
        int bladeSpeed;
        string orientation;

    public:
        WindTurbine(double p = 100, int b = 0, string o = "horizontal");
        void setPowerOutput(double p);
        void setBladeSpeed(int b);
        void setOrientation(string o);
        double getPowerOutput();
        int getBladeSpeed();
        string getOrientation();
        string toString();
};

#endif
