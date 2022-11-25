#include <iostream>
#include <iomanip>
#include <string>

#include "Student.h"

using namespace std;

int main( ) {

  // create some student objects - test constructor

  Student donald( "Donald", "Trump", "888888888", 1.6 );
  Student hilary( "Hilary", "Clinton", "777777777", 1.7 );
  Student franklin( "Franklin", "Pierce", "33333333" );

  // test the accessors
  cout << "Student #1" << endl;
  cout << donald.getFirstName( ) << " " << donald.getLastName( ) << endl;
  cout << "ID # " << donald.getStudentId( ) << "  GPA " << donald.getGpa( ) << endl;

  // test the mutators
  donald.setFirstName( "Sam" );
  donald.setLastName( "Weston" );
  donald.setStudentId ( "7231972123" );
  donald.setGpa( 2.8 );

  cout << "Student #1" << endl;
  cout << donald.getFirstName( ) << " " << donald.getLastName( ) << endl;
  cout << "ID # " << donald.getStudentId( ) << "  GPA " << donald.getGpa( ) << endl;

  cout << "Student #3" << endl;
  cout << franklin.getFirstName( ) << " " << franklin.getLastName( ) << endl;
  cout << "ID # " << franklin.getStudentId( ) << "  GPA " << franklin.getGpa( ) << endl;
}
