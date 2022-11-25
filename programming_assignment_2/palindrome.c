// 3.34 (Palindrome Tester) A palindrome is a number or a text phrase that reads 
// the same backward as forward. For example, each of the following five-digit 
// integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that 
// reads in a five-digit integer (?? what if it's not ?? )
// and determines whether or not it’s a palindrome. 
// [Hint: Use the division and remainder operators to separate the number into its 
// individual digits.]

#include <stdio.h>
#include <math.h>

// still need to deal with the situation where the user enters a number
// that's not 5 digits


int main ( void ) {
    
    // declare variables
    int number, copy, ones, tens, hundreds, thousands, tenThousands;
    
    // get input
    printf("Enter a 5-digit integer.\n");
    scanf("%d", &number);
    
    copy = number;
    
    // separate the number into its individual digits
    
    // get the one's place
    
    ones   =  number % 10;
    
    // get the ten's place
    
    number = number / 10;
    tens = number % 10;
    
    // get the hundreds place
    
    number = number / 10;
    hundreds = number % 10;
    
    // get the thousands place
    
    number = number / 10;
    thousands = number % 10;
    
    // get the ten thousands place
    
    number = number / 10;
    tenThousands = number % 10;
    
    // decide whether it's a palindrome or not
    if ( tenThousands == ones && thousands == tens )
        printf("%d is a palindrome.\n", copy);
    else
        printf("%d is not a palindrome.\n", copy);
    
} // end main
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
