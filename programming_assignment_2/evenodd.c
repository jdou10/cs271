#include <stdio.h>
#include <math.h>

int main ( void ) {
    
    int num;
    // print a prompt
    printf( "Enter an integer: " );
    scanf( "%d", &num );
    
    if ( num % 2 == 0 )
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    
} // end main
