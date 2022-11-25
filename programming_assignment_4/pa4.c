// CS 271 - PA 4
// Program name: pa4.c
// Jingru Dou
// 4 March 2021


#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "arrayfunctions.h"
#include "arrayfunctions.c"


int main(){
    
// Problem 1
 /*  srand(time(NULL)); // the seed
   printf("Problem 1\n");
   
   int a[20];
   fillInteger(a, 20);
   printf("The integer array is:\n");
   
   for(int i = 0; i < 20; i++){
       printf("%4d", a[i]);
       if((i + 1) % 10 == 0)
           printf("\n");
   } // end for
   findConsecutive(array, 20);


// Problem 2
   printf("Problem 2\n");
   
   char c[50];
   fillCharacter(c, 50);
   printf("The character array is:\n");
   
   for(int i = 0; i < 50; i++){
       printf("%c ", c[i]);  
   } // end for
   findTriples(c, 50);

*/
// Problem 3
    printf("Problem 3\n");
    
    int count=0;
    
    char letter;
    for (;;) {  // the loop
        letter = getchar(); // read a character

        count = count + countCharacter(c,sizeof(c), letter); // calculate how many times
        if (isalpha(letter)) 
          break; // if it's character than jump out of loop
        else { 
            letter=getchar(); // read a character
            letter = tolower(letter);
            printf(letter);
        } // end else
    } // end for

   printf("find %d count from input letters\n", count);

    /*
// Problem 4
   printf("Problem 4\n");
   
   float a[10];
   fillFloat(a, 10);
   printf("The float array is:\n");
   
   for(int i = 0; i < 10; i++){
       printf("%.1f ", a[i]);
   } // end for
   
   float mean = floatMean(a, 10);
   printf("\n\nMean: %.2f\n", mean);
   
   float min = floatMin(a, 10);
   printf("Min: %.2f\n", min);
   
   float max = floatMax(a, 10);
   printf("Max: %.2f\n", max);
   */
    
} // end main
