// CS 271 - PA 5
// Program name: sortingfunctions.c
// Jingru Dou
// 11 March 2021


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sortingfunctions.h"


int selectionSort(int * const data, int size){
//sorts the array using the selection sort algorithm
//count the number of times that the program executes an if statement that compares the values of two array elements.
    int temp = 0;
    
    // iterate over size elements
    for(int i = 0; i < size; ++i){
        int* num1 = data + i;
        int* num2 = data + i;
        // to check if there still have element are left
        for(int j = i + 1; j < size; ++j){
            ++temp;
            if(data[j] < * num2){
                num2 = data + j;
            } // end if
        } // end for
        swap(num1, num2);
    } // end for
    return temp;
} // end selectionSort



int insertionSort(int * const data, int size) {
//sorts the array using the insertion sort algorithm
//count the number of times that the program executes an if statement that compares the values of two array elements
    int temp = 0;
    
    // iterate over size elements
    for(int i = 0; i < size; ++i){
        
        int* num1 = data + i; 
        int j = i - 1;
        
        while(j >= 0) {
            ++temp; // updating temp
            if(data[j] > *num1) {
                // data[j] is greater than what num1Ptr points at
                int* num2 = data + j; // now num2Ptr points at data[j]
                swap(num1, num2);
                --num1;
            } else {
                break;
            }
            --j;
        } // end while
    } // end for
    return temp;
} // end insertionSort


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
    for(int i = 0; i < size; i++) {
        *data = min + rand() % (max + 1 - min);
        data[i] = *data;
    } // end for
    return;
} // end fillArray


void neatPrint(int * const data, int size, int numPerLine, int fieldSize){
//Prints the array elements in nice, neat columns using the parameters numPerLine and fieldSize to control the layout.
    for(int i = 0; i < size; i++) {
        printf("%*d", fieldSize, data[i]);
        
        if(((i + 1) % numPerLine) == 0) {
            printf("\n");
        } // end if
    } // end for
} // end neatPrint
