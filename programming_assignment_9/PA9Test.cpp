// CS 271 - PA 9
// Program name: PA9Test.cpp
// Jingru Dou
// 15 April 2021

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "WindTurbine.h"


using namespace std;

int main() {
    WindTurbine w (100.0, 80, "horizontal");
    cout << "Bladespeed is " << w.getBladeSpeed() << endl;
    cout << w.toString() << endl;
    w.setPowerOutput(120.0);
    cout << w.toString() << endl;
    
    // test
    WindTurbine w2;
    
    // test setPowerOutput
    w2.setPowerOutput(750.0);
    
    // test setBladeSpeed
    w2.setBladeSpeed(150);
    
    // test setOrientation
    w2.setOrientation("vertical");
    
    // test getPowerOutput
    cout << w2.getPowerOutput() << endl; 
    
    // test getBladeSpeed
    cout << w2.getBladeSpeed() << endl;
    
    // test getOrientation
    cout << w2.getOrientation() << endl;
    
    return 0;
}

