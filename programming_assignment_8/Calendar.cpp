// CS 271 - PA 8
// Program name: Calendar.cpp
// Jingru Dou
// 8 April 2021

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Time.h"
#include "Date.h"

using namespace std;

int main() {
    // create an array of 5 Time objects and set them to random times.
    Time t[5];
    for(int i = 0; i < 5; i++) {
        t[i].setHour((rand() % 23));
        t[i].setMinute((rand() % 59));
        t[i].setSecond((rand() % 59));
    }

    // print the time in 24 formate
    cout << "Print the Time in 24 hours format:" << endl;
    for(int i = 0; i < 5; i++) {
       t[i].print();
       cout << endl;
    }

    for(int j = 0; j < 5; j++) {
        t[j].setHour((rand() % 11));
        t[j].setMinute((rand() % 59));
        t[j].setSecond((rand() % 59));
    }
    
    // print the time in 12 formate
    cout<< "\nPrint the Time in 12 hours format:" << endl;
    for(int j = 0; j < 5; j++) {
        t[j].print12();
        cout << endl;
    }
    
    // Date
    Date d[5];
    int day;
    int month;
    int year;

    for(int i = 1; i < 5; i++) {
        cout << "The date object is " << i + 1 << endl;
        cout << "Please enter day: ";
    cin >> day;
            d[i].setDay(day);
            cout << "Please enter month: ";
    cin >> month;
            d[i].setMonth(month);
    cout << "Please enter year: ";
    cin >> year;
            d[i].setYear(year);
    }

    cout << "\nPrint the Date:" << endl;
    for(int i = 0; i < 5; i++){
        d[i].print();
        cout << endl;
    }

   return 0;
}
