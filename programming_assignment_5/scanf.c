#include <stdio.h>

int main( void ) {

   char c;

   while ( !feof(stdin) ) {
      scanf("%c", &c); 
      printf("'%c'  ASCII CODE = %3d\n", c, c);
   }
} // end main

