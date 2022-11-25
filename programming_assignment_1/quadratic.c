#include <stdio.h>
#include <math.h>
// put these two statements in every program you write

// # is placed in front a "preprocessor directive"

int main( void ) {
    // input the coefficients of the quadratic expression
    
    int a, b, c;
    double x1, x2;
    
    printf("Enter the value of a\n");
    scanf("%d", &a);
    //  & is the "address of" operator
    
    printf("Enter the value of b\n");
    scanf("%d", &b);
    
    printf("Enter the value of c\n");
    scanf("%d", &c);
    
    // check to make sure the discriminant is positive
    
    if ( pow( b, 2 ) - 4 * a * c >= 0 ) {
        
       // calculate the value of x
       x1 =  ( -b + sqrt( pow(b, 2) - 4 * a * c ) ) / ( 2 * a );
       x2 = ( -b - sqrt( pow(b, 2) - 4 * a * c ) ) / ( 2 * a );
    
       printf("x1 = %lf  x2 = %lf\n", x1, x2);
    } // end if
    
    else 
       printf("The answer is imaginary.\n");
    
    
    
} // end main


    
    
    
    
    
    
    
