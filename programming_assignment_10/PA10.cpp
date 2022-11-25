// CS 271 - PA 10
// Program name: PA10.cpp
// Jingru Dou
// 29 April 2021

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include "Date.h"

using namespace std;

int main(){
    Date d1(01,01,1980);
    Date d2;
    Date d3;
    Date d4;
    Date d5;
    Date d6;
    Date d7;
    Date d8;
 
    // test constructors
    cout << "Date1 is " << d1 << endl;
    cout << "Date2 is " << d2 << endl;
    cout << "Date1 += 7 day is " << (d1 += 7) << endl;
    
    
    // test setDate
    cout << "Testing try and catch:";
    
    try {
        d6.setDate(6,30,1335); // test values that out of range
    } 
    catch (invalid_argument &e) {
        cout << "\n\nException is: " << e.what() << endl;
    } 
    
    try {
        d2.setDate(6,13,2001); // test values that out of range
    } 
    catch (invalid_argument &e){
        cout << "\n\nException is: " << e.what() << endl;
    } 
   
    cout << "Date2 is " << d2 << endl;
    cout << "Test accessors value is: " << endl;
    cout << "The month is: " << d2.getMonth() << " The day is: " << d2.getDay() << " The year is: " << d2.getYear() << endl;

    
    // test prefix++ 
    cout << "Prefix date2 is: " << (++d2) << endl;
    
    // test postfix++
    try {
        d3.setDate(6,2,1987);
    } 
    catch (invalid_argument &e) {
        cout << "\n\nException is: " << e.what() << endl;
    } 
    
    cout << "Date3 is: " << d3 << endl;
    cout << "Postfix date3 is " << (d3++) << endl;
    cout << "Date3 is: " << d3 << endl;
    cout << "Test >> two cin: " << endl;
    
    try {
        cin >> d7 >> d8;
    } 
    catch (invalid_argument &e) {
        cout << "\n\nException is: " << e.what() << endl;
    } 
    
    cout << "Test >> is still working" << endl;
    cin >> d4 >> d5;
    cout << "Date4 is " << d4 << "  Date5 is " << d5 << endl;
    
    return 0;
}
