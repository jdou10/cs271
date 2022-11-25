// CS 271 - PA 3
// Program name: pa3.c
// Jingru Dou
// 18 February 2021

#include "pa3functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
 // use the perfect function to print the positive, perfect numbers
 // less than 1000
    int i = 0, j = 0;
    int x = 0, y = 0, z = 0;
    printf("The perfect number less than 1000: ");
    for(i = 0; i <= 1000; i++) {
        x = perfect(i);
        if(x == 1) {
            printf("%d ", i);
        } // end if
    } // end for
    printf("\n");
    
 // use the prime function to print the first 20 positive, prime numbers
 // note: 1 is not a prime
    printf("The first 20 positive prime numbers is between: ");
    for(j = 0; j <= 72; j++) {
        y = prime(j);
        if(y == 1)
            printf("%d ", j);
    } // end for
    printf("\n");
    
 
    // use the rand function to generate a random number between 
    // 1 and 10000 (inclusive)
    int a[10], m;
    srand((unsigned int)time(NULL)); // set the current time as seed
    for(m = 0; m < 10; ++m) {
        a[m] = rand() % 10000 + 1; // generate the random numbers between 1 ~ 10000
    } // end for
    
    // print the random numbers just generated
    for(m = 0; m < 10; ++m){
        printf("%d ", a[m]);
    } // end for
    printf("\n");
    
        
    // use the revDigits function to obtain the reverse of the number
    // print the reverse of the number
    printf("If the digit is 852, the reversed digit will be: %d\n", revDigits(852));
    printf("If the digit is 6840, the reversed digit will be: %d\n", revDigits(6840));
    printf("If the digit is 1273, the reversed digit will be: %d", revDigits(1273));
    printf("\n");
    
    return 0;
} // end main
