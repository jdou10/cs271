// CS 271 - PA 5
// Program name: helperfunctions.c
// Jingru Dou
// 11 March 2021

#include <ctype.h>
#include <stdio.h>
#include <stddef.h>

void swap(int * num1, int * num2){
// Exchanges the contents of the two memory locations.
    int temp;
    
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
} // end swap
    
    
void fillArray(int * const data, int size, int min, int max){
//Fills the array elements with integers from min to max (inclusive).
    for(int i = 0; i < length; i++) {
        int randomInt;
        randomInt = min + rand() % (max + 1 - min);
        
        data[i] = randomInt;
    } // end for
    return;
} // end fillArray


void neatPrint(int * const data, int size, int numPerLine, int fieldSize){
//Prints the array elements in nice, neat columns using the parameters numPerLine and fieldSize to control the layout.
    for(int i = 0; i < length; i++) {
        printf("%*d", fieldSize, data[i]);
        
        if(((i+1) % numPerLine) == 0) {
            printf("\n");
        } // end if
    } // end for
} // end neatPrint
