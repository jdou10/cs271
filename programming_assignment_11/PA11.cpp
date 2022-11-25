// CS 271 - PA 11
// Program name: PA11.cpp
// Jingru Dou
// 6 May 2021

#include <iostream>
#include <iomanip>
#include <string>
#include "LongDate.h"
#include "Date.h"

using namespace std;

int main() {
    //test date
    LongDate date(5, 6, 2021);
    cout << "the day of week:" << date.getDayOfTheWeek() << endl;
    date.helpIncrement();
    cout << "the day of week:" << date.getDayOfTheWeek() << endl;
    return 0;
}
