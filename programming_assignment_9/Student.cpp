#include "Student.h"
#include <string>

using namespace std;

// :: is the "scope resolution operator"

Student::Student( string fn, string ln, string id, float g ) {

   // constructor purpose is to initialize the data members
   
   setFirstName( fn );
   setLastName( ln );
   setStudentId ( id );
   setGpa( g );
       
}
string Student::getFirstName( ) const {

   // accessor purpose is to return the value of a data member
   return firstName;
}

string Student::getLastName( ) const {

  return lastName;
}
string Student::getStudentId( ) const {

  return studentId;
}

float Student::getGpa( ) const {

   return gpa;
}
   
void Student::setFirstName( string fn ) {

   // mutator purpose is to change / modify a data member's value

   firstName = fn;
}

void Student::setLastName( string ln ) {

   lastName = ln;
}
void Student::setStudentId( string id ) {

   studentId = id;
}
void Student::setGpa( float g ) {

   if ( g >= 0.0 && g <= 4.0 )
      gpa = g;

   // ignore bad data
}







