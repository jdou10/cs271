// CS 271 - PA 8
// Program name: Date.h
// Jingru Dou
// 8 April 2021

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Date {

    private:
        unsigned int day;
        unsigned int month;
        unsigned int year;

        
    public:
        Date();
        Date(int d, int m, int y);
        void setDay(int d);
        void setMonth(int m);
        void setYear(int y);
        int getDay();
        int getMonth();
        int getYear();
        void print();
};

#endif
