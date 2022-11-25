// CS 271 - PA 8
// Program name: Time.cpp
// Jingru Dou
// 8 April 2021


#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

using namespace std;

    unsigned int hour;
    unsigned int minute;
    unsigned int second;

    
Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

void Time::setHour(int h){
    if (h >= 01 && h <= 30) {
        hour = h;
    }
}

void Time::setMinute(int m){
    if (m >= 01 && m <= 60) {
        minute = m;
    }
}

void Time::setSecond(int s){
    if (s >= 01 && s <= 60) {
        second = s;
    }
}

// three accessor
int Time::getHour(){
    return hour;
}

int Time::getMinute(){
    return minute;
}

int Time::getSecond(){
    return second;
}

// 24 hours
void Time::print(){
    cout << setfill('0') << setw(2) << getHour() << ":" << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

// 12 hours
void Time::print12(){
    cout << setfill('0') << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (hour < 12 ? "am":"pm") << endl;
}
