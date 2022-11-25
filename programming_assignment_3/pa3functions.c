// CS 271 - PA 3
// Program name: pa3functions.c
// Jingru Dou
// 18 February 2021

#include "pa3functions.h"
#include <math.h>

// problem 5.26
int perfect(int n) {
    int m = 0, i;
    for(i = 1; i < n; i++) {
        if(n % i == 0)
            m += i;
    } // end for
    if(m == n)
        return 1;
    else
        return 0;
} // end perfect

// problem 5.27
int prime(int n){

    int c = 0, i =0;
    for(i = 2; i <= n / 2; i++) {
       if(n % i == 0) {
          c++;
            break;
       } // end if
    } // end for
    
    if(c == 0 && n != 1)
       return 1;
    else
       return 0;
} // end prime

// problem 5.28
int revDigits(int s) {
    int j = 0, k;
    while(s != 0) {
        k = s % 10;
        j = j * 10 + k;
        s /= 10;
    } // end while
    return j;
} // end revDigits
