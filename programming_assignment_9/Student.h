#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student { 
public:
   Student( string fn = "", string ln = "", string id = "", float g = 0.0 );
   string getFirstName( ) const;
   string getLastName( ) const;
   string getStudentId( ) const;
   float getGpa( ) const;
   
   void setFirstName( string fn );
   void setLastName( string ln );
   void setStudentId( string id );
   void setGpa( float g );

private:
   string firstName;
   string lastName;
   string studentId;
   float gpa;
};
#endif








