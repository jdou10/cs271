// CS 271 - PA 11
// Program name: LongDate.cpp
// Jingru Dou
// 6 May 2021

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "LongDate.h"
#include "Date.h"

using namespace std;

//initialize the days of the week
const vector<string> LongDate::dates = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

// constructor
LongDate::LongDate(int month, int day, int year) : Date(month, day, year) {
    setDayOfTheWeek();
}

// accessors
string LongDate::getDayOfTheWeek() const {
    return dayOfTheWeek;
}

//mutator, setDate
void LongDate::setDayOfTheWeek() {
    unsigned int month = getMonth();
    unsigned int year = getYear();


    if (month == 1 || month == 2) {
        month += 12;
        year--;
    }
    
    unsigned int weekday =
            (getDay() + 1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    dayOfTheWeek = LongDate::dates[weekday];

}

void LongDate::helpIncrement() {
    //++(*this);
    setDayOfTheWeek();
}

// set month, day and year
void LongDate::setDate(unsigned int month, unsigned int day, unsigned int year) {
    Date::setDate(month, day, year);
    setDayOfTheWeek();
}
