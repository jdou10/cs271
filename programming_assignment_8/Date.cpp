// CS 271 - PA 8
// Program name: Date.cpp
// Jingru Dou
// 8 April 2021

#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"

using namespace std;

Date::Date(){
    month = 01;
    day = 01;
    year = 1980;
}

Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

void Date::setDay(int d){
    if (d >= 0 && d <= 31) {
        day = d;
    }
}

void Date::setMonth(int m)  {
     if(m > 0 && m <= 12) {
        month = m;
    }
}

void Date::setYear(int y) {
    if (y >= 1980 && y < 2050){
    year = y;
    }
}

int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear( ){
    return year;
}

void Date::print ( ){
    cout << setfill('0');
    cout << setw(2) << month << "/" << setw(2) << day << "/" << setw(2) << year << endl;
}
