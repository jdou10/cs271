#include <stdio.h>
#include <math.h>

int main ( void ) {
    
    float input, sum;
    
    // initialization
    printf("Enter a number.  Enter zero to stop.\n");
    scanf("%f", &input);
    
    sum = 0;
    
    // start the sentinel loop
    while ( input != 0 ) {
        sum += input;
        
        // input the next value
        printf("Enter a number.  Enter zero to stop.\n");
        scanf("%f", &input);
    } // end while
    
    // print the sum
    printf("The sum is %.2f.\n", sum);
} // end main
















