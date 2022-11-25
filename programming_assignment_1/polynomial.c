#include <stdio.h>
#include <math.h>

int main (void) {
    
     // input the value of x
     // decimal, perhaps a lot of digits of precision
    
     double x, polynomial;
     
     printf("Enter the value of x\n");
     scanf("%lf", &x);
     
     // calculate the value of the polynomial
     polynomial = pow( x, 4 ) + 3 * pow( x, 3 ) - 9 * pow( x, 2 ) - 5 * x + 2;
     
     // display the output
     
     printf( "The value of the polynomial is %f.\n", polynomial );
     
     // old programmer's expression  "C will let you shoot yourself in the foot."
} // end main
     
     
     
     
     
