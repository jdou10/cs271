// CS 271 - PA 3
// Program name: Makefile
// Jingru Dou
// 18 February 2021


all: pa3

pa3: pa3.o pa3functions.o
	gcc pa3.o pa3functions.o -o pa3 -lm
	
pa3functions.o: pa3functions.c pa3functions.h
	gcc -c pa3functions.c
	
pa3.o: pa3.c pa3functions.h
	gcc -c pa3.h
	
clean: rm -rf*.o
