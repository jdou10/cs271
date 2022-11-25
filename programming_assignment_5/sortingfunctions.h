// CS 271 - PA 5
// Program name: sortingfunctions.h
// Jingru Dou
// 11 March 2021

#include <ctype.h>
#include <stdlib.h>

#ifndef SORTINGFUNCTIONS
#define SORTINGFUNCTIONS

    int selectionSort(int * const array, int size);
    int insertionSort(int * const array, int size);
    void swap(int * num1, int * num2);
    void fillArray(int * const data, int size, int min, int max);
    void neatPrint(int * const data, int size, int numPerLine, int fieldSize);

#endif
