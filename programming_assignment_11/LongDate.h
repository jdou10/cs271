// CS 271 - PA 11
// Program name: LongDate.h
// Jingru Dou
// 6 May 2021
#ifndef LONGDATE_H
#define LONGDATE_H

#include <iostream>
#include <vector>
#include <string>
#include "Date.h"

using namespace std;

class LongDate : public Date {
    
public:
    LongDate(int month, int day, int year);
    string getDayOfTheWeek() const;
    void setDayOfTheWeek();
    void helpIncrement();
    void setDate(unsigned int month, unsigned int day, unsigned int year);

private:
    string dayOfTheWeek;
    static const vector<string> dates;
};

#endif
