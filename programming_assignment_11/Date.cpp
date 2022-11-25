// CS 271 - PA 11
// Program name: Date.cpp
// Jingru Dou
// 6 May 2021

// Date.cpp
// Date class member- and friend-function definitions.
#include <iostream>
#include <iomanip>
#include <string>
#include "Date.h"
using namespace std;

// initialize static member; one classwide copy
const int Date::days[] = 
   { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date( unsigned int m, unsigned int d, unsigned int y ) 
{ 
   setDate( m, d, y ); 
} // end Date constructor

// mutators

// set month, day and year
void Date::setDate( unsigned int mm, unsigned int dd, unsigned int yy )
{

   if (yy >= 1980 && yy <= 2100)
       year = yy;
   else
       throw invalid_argument( "Year is not in the valid range" );

   if (mm >= 1 && mm <= 12)
      month = mm;
   else 
      throw invalid_argument( "Month must be 1 - 12" );

   if (month == 2 && leapYear() )
       if (dd >= 1 && dd <= 29)
          day = dd;
       else
          throw invalid_argument( "Day and month aren't compatible" );
   else 
        if ( dd >= 1 && dd <= days[month] )
           day = dd;
        else
          throw invalid_argument( "Day and month aren't compatible" );
   
} // end function setDate

// accessors
unsigned int Date::getDay( ) const {
   return day;
}
unsigned int Date::getMonth( ) const {
   return month;
}
unsigned int Date::getYear( ) const {
   return year;
}
// overloaded prefix increment operator 
Date & Date::operator++() {
   helpIncrement(); 
   
   return *this; 
   
} // end function operator++


// overloaded postfix increment operator; note that the  
// dummy integer parameter does not have a parameter name

Date Date::operator++( int ) {
   Date temp = *this; // hold current state of object
   
   helpIncrement(); 

   // return unincremented, saved, temporary object
   
   return temp;
   
} // end function operator++

const Date & Date::operator+=( unsigned int additionalDays ) {
   for ( int i = 0; i < additionalDays; i++ )
      helpIncrement();

   return *this; // enables cascading
   
} // end function operator+=

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear( ) const {
   if ( year % 400 == 0 || 
      ( year % 100 != 0 && year % 4 == 0 ) )
      return true;
   else
      return false; 
} // end function leapYear


// determine whether the day is the last day of the month
bool Date::endOfMonth( ) const {
   if ( month == 2 && leapYear( ) )
      return day == 29;
   else
      return day == days[ month ]; 
} // end function endOfMonth

// function to help increment the date
void Date::helpIncrement()
{
   // day is not end of month
   if ( !endOfMonth( ) )
      day++; 
   else 
      if ( month < 12 ) 
      {
         month++; 
         day = 1; 
      } 
      else // last day of year
      {
         year++; // increment year
         month = 1; // first month of new year
         day = 1; // first day of new month
      } // end else
} // end function helpIncrement

// overloaded output operator
ostream &operator<<( ostream &output, const Date &d )
{
   static string monthName[ 13 ] = { "", "January", "February",
      "March", "April", "May", "June", "July", "August",
      "September", "October", "November", "December" };
   output << monthName[ d.month ] << ' ' << d.day << ", " << d.year;
   return output; // enables cascading
} // end function operator<<
