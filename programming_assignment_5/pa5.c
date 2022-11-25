// CS 271 - PA 5
// Program name: pa5.c
// Jingru Dou
// 11 March 2021

#include <stdio.h>
#include <stdlib.h>
#include "sortingfunctions.h"
#define ARRAYSIZE 10

int main(void) {
    // dynamically allocate memory space for an array
    int * arrayPtr = (int *) malloc (ARRAYSIZE * sizeof(int));
 
    // fill the array with random integers
    fillArray(arrayPtr, ARRAYSIZE, 1, 999);

    // print the array, 10 elements per line
    neatPrint(arrayPtr, ARRAYSIZE, 10, 5);
 
    // sort the array using selection sort and print the return value
    int temp_selectionSort = selectionSort(arrayPtr, ARRAYSIZE);
    printf("The return value is: %d\n\n", temp_selectionSort);
 
    // print the array, 10 elements per line
    neatPrint(arrayPtr, ARRAYSIZE, 10, 5);
 
    // fill the array again with random integers
    fillArray(arrayPtr, ARRAYSIZE, 10, 500);
    
    // print the array
    neatPrint(arrayPtr, ARRAYSIZE, 12, 5);
    
    // sort with insertion sort and print the return value
    int temp_insertionSort = insertionSort(arrayPtr, ARRAYSIZE);
    printf("The return value is: %d\n\n", temp_insertionSort);
    
    // print the array
    neatPrint(arrayPtr, ARRAYSIZE, 12, 4);
    return 0;
} // end main
