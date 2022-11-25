// CS 271 - PA 10
// Program name: Date.h
// Jingru Dou
// 29 April 2021

#ifndef DATE_H
#define DATE_H

#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


class Date{
    
    friend ostream &operator<<(ostream &, const Date &);
    friend istream &operator>>(istream &, Date &);
   
    public:
        Date(); // default constructor
        Date(unsigned int m, unsigned int d, unsigned int y);
        void setDate(unsigned int m, unsigned int d, unsigned int y);
        int const getMonth();
        unsigned int const getDay();
        unsigned int const getYear();
        Date operator++(int); // postfix
        Date& operator++(); // prefix
        const Date &operator+=(int); // to add days
        
    private:
        unsigned int month;
        unsigned int day;
        unsigned int year;
        void helpIncrement();
        bool endOfMonth();
        bool leapYear();
};

#endif
