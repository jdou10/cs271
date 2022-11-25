// CS 271 - PA 4
// Program name: arrayfunctions.h
// Jingru Dou
// 4 March 2021


#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

// nine prototypes of functions
void fillInteger(int a[], int length, int min, int max );
void fillCharacter(char c[], int length, char start, char end );
void findConsecutive(int array[] , int length );
void findTriples (char c[], int length );
int countCharacter(char c[], int length, char searchChar);
void fillFloat(float a[], int length, float min, float max);
float floatMean(float array[], int length);
float floatMin(float array[], int length);
float floatMax(float array[], int length);

#endif
