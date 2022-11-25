// 3.37 (Detecting Multiples of 10) Write a program that prints 100 asterisks, 
// one at a time. After every tenth asterisk, your program should print a newline
// character. [Hint: Count from 1 to 100. Use the remainder operator to recognize 
// each time the counter reaches a multiple of 10.] 

#include <stdio.h>
#include <math.h>

int main (void) {
    
    // declare variables
    // none are needed

    for (int i = 1; i <= 100; i++) {  // curly braces
        
        // answer is 2:  a printf and an if statement
        
        printf("*");
        if ( i % 10 == 0 )
            printf("\n");
        
    } //end for
    
} // end main
    
    
