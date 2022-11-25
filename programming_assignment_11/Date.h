// CS 271 - PA 11
// Program name: Date.h
// Jingru Dou
// 6 May 2021

// Date.h
// Date class definition with overloaded increment operators.
#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date
{
   friend ostream & operator<<( ostream &, const Date & );
   friend istream & operator>>( istream &, Date & );

public:
   
   Date( ); // default constructor
   Date( unsigned int, unsigned int, unsigned int );
   void setDate( unsigned int, unsigned int, unsigned int ); 
   unsigned int getDay(  ) const;
   unsigned int getMonth( ) const;
   unsigned int getYear( ) const;
   Date & operator++();                    // prefix increment operator
   Date operator++( int );                 // postfix increment operator
   const Date &operator+=( unsigned int ); // add days, modify object
   
private:
   unsigned int month;
   unsigned int day;
   unsigned int year;
   static const int days[];       // array of days per month
   void helpIncrement();          // utility function for incrementing date
   bool leapYear() const;         // is date in a leap year?
   bool endOfMonth() const;       // is date at the end of month?

}; // end class Date

#endif
