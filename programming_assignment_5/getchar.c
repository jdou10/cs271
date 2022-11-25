#include <stdio.h>

int main( void ) {

   char c;

   while ((c = getchar( )) != EOF) {

      printf("'%c'  ASCII CODE = %3d\n", c, c);
   }
} // end main

