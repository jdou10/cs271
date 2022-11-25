// CS 271 - PA 4
// Program name: arrayfunctions.c
// Jingru Dou
// 4 March 2021


#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "arrayfunctions.h"


void fillInteger(int a[], int length, int min, int max){
    for(int i = 0; i < length; i++){
        a[i] = rand() % max + min; //rand() function is used to generate random numbers between min and max
    } // end for
} // end fillInteger

void fillCharacter(char c[], int length, char start, char end){
    int min, max;
    min = start - 'a'; //used to convert start to its ascii equivalent
    max = end - 'a' + 1; //used to convert start to its ascii equivalent
  
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' }; //array to store alphabets and generate the random alphabets later
  
    for(int i = 0; i < length; i++){
        c[i] = alphabet[rand() % max + min]; //rand() function is used to generate random characters from alphabet array between start and end
    } // end for
} // end fillCharacter

void findConsecutive(int array[], int length){
    //Printing the Integer array elements
    printf("\nElements of Integer array are:\n");
    
    for(int i = 0; i < length; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
  
    for(int i = 0; i < length - 1; i++){
        if(array[i] + 1 == array[i + 1]) { //Comparing current ([i]th) element + 1 to next ([i+1]th) element to see if they are consecutives

        printf("Elements [%d] and [%d] are consecutive\n", i, i + 1); //If true, printing the output
        } // end if
    } // end for
} // end findConsecutive

void findTriples(char c[], int length){
    int i;
    //Printing the Character array elements
    printf("\nElements of Character array are:\n");
    
    for(int i = 0; i < length; i++){
        printf("%c ", c[i]);
    } // end for
    printf("\n");

    for(int i = 0; i < length - 2; i++){
        if((c[i] + 1 == c[i + 1]) && (c[i] + 2 == c[i + 2])){ //Comparing three consecutive elements to see if they are in alphabetic sequence

        printf("%c%c%c\n", c[i], c[i + 1],c[i + 2]); //If true, printing the output
        } // end if
    } // end for
} // end findTriples


int countCharacter(char c[], int length, char searchChar){
    // initialize count to 0
    int count = 0;
    int i; // loop counter
    // iterate through input array
    for(i = 0; i < length; i++){
    // compare and increment count
        if(c[i] == searchChar)
            count++;
    } // end for
    // returning count
    return count;
} // end countCharacter


void fillFloat(float a[], int length, float min, float max){
    int i; // loop counter
    int randomNumber; // variable to store random int
    // iterate through input array
    for(i = 0; i < length; i++){
    // generating integer in between min*10 and max*10 and dividing by 10.0
    // and assigning to array
        a[i] = (rand() % ((int)max * 10 + 1 - (int)min * 10) + min * 10) / 10.0;
    } // end for
} // end fillFloat


float floatMean(float array[], int length){
    int i; // loop counter
    float sum = 0; // variable to store sum
    // find sum using loop
    for(i = 0; i < length; i++){
        sum += array[i];
    } // end for

    // returning arithmetic mean
    return sum / length;
} // end floatMean


float floatMin(float array[], int length){
    int i; // loop counter
    float min = array[0]; // initialize min to first element of the array
    // iterate through array using for loop
    for(i = 0; i < length; i++){
    // compare and change min value
        if(min > array[i])
            min = array[i];
    } // end for
    // returning minimum value
    return min;
} // end floatMin

float floatMax(float array[], int length){
    int i; // loop counter
    float max = array[0]; // initialize max to first element of the array
    // iterate through array using for loop
    for(i = 0; i < length; i++){
    // compare and change max value
        if(max < array[i])
            max = array[i];
    } // end for
    // returning maximum value
    return max;
} // end floatMax


int main(void) {
   srand(time(0)); //To make sure that, rand produces random numbers on every call
  
   int lengthIntegers, lengthCharacters;
   scanf("%d %d", &lengthIntegers, &lengthCharacters); //Taking input of length of Integer Array and length of Character Array
  
   int a[lengthIntegers];
   char c[lengthCharacters];
  
   int min, max;
   scanf("%d %d", &min, &max); //Taking input of min and max of Integer Array
  
   char start, end;
   scanf(" %c %c", &start, &end); //Taking input of start and end of Character Array
  
   //Calling the functions
   fillInteger(a,lengthIntegers, min, max);
   fillCharacter(c,lengthCharacters, start, end);
   findConsecutive(a, lengthIntegers);
   findTriples(c, lengthCharacters);
  
   
   // 第二部分 从countCharater开始
   // using countCharacter()
    printf("Character count of 'p' in 'Apple' is %d\n\n", countCharacter("Apple", 5, 'p'));

    // using fillFloat()
    float arr[10];
    fillFloat(arr, 10, 20, 40);
    int i; // loop counter

    // printing randomly filled array
    for(i = 0; i < 10; i++){
        printf("%.1f\t", arr[i]);
    } // end for
    printf("\n");
    
    // using functions in main function
    printf("Mean of the array: %.1f\n", floatMean(arr, 10));
    printf("Minimum of the array: %.1f\n", floatMin(arr, 10));
    printf("Maximum of the array: %.1f\n", floatMax(arr, 10));
} // end main
