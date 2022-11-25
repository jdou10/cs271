// CS 271 - PA 10
// Program name: Date.cpp
// Jingru Dou
// 29 April 2021

#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept> 
#include "Date.h"

using namespace std;

Date::Date(){
    month = 1;
    day = 1;
    year = 1980;
}

Date::Date(unsigned int m,unsigned int d,unsigned int y) {
    setDate(m, d, y);
} // end Date


int daysPerMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// function helpIncrement
void Date::helpIncrement() {
    if(!endOfMonth())
        ++day;
    else
        if(month < 12) {
            ++month;
            day = 1;
        }
        else {
            ++year;
            month = 1;
            day = 1;
        }
} // end helpIncrement


// function endOfMonth
bool Date::endOfMonth() {
    if(month == 2 && leapYear())
        return day == 29;
    else
        return day == daysPerMonth[month];
} // end endOfMonth


// function leapYear
bool Date::leapYear() {
    if(year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
        return true;
    else
        return false;
} // end leapYear


void Date::setDate(unsigned int m, unsigned int d, unsigned int y ){
    if (!(m >= 1 && m <= 12))
        throw invalid_argument("Month must be 1 to 12."); 
    // leap check
    if (!(( d >= 1 && d <= daysPerMonth[m]) || (leapYear() && m == 2 && d == 29)))
        throw invalid_argument("Day is out of range.");
    if (!(y >= 1980 && y <= 2100) )
        throw invalid_argument("Year must be larger than 1900 and less than 2100.");
    
    month = m;
    day = d;
    year = y;
    
}//end setDate


// three get functions
int const Date::getMonth() {
    return month;
}

unsigned int const Date::getDay() {
    return day;
}

unsigned int const Date::getYear() {
    return year;
}
// end three get functions
    

// prefix increment operator
Date &Date::operator++() {
    helpIncrement();
    return *this;
} // end prefix


// postfix increment operator
Date Date::operator++(int) {
    Date temp = *this;
    helpIncrement();
    return temp;
} // end postfix

    
// add specified number of days to date
const Date &Date::operator+=(int additionalDays){
    for(int i = 0; i < additionalDays; ++i)
        helpIncrement();
        return *this;
}//end operator additionalDays


// overload output operator
ostream &operator<<(ostream &output, const Date &d) {
    static string monthName[13] = {" ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    output << monthName[d.month] << ' ' << d.day << ", " << d.year;
        return output;
} // end ostream

istream &operator>>(istream &input, Date &d) {
    int temp1;
    int temp2;
    int temp3;
    input >> temp1;
    input >> temp2;
    input >> temp3;
    d.setDate(temp1, temp2, temp3);

    return input;
} // end istream

