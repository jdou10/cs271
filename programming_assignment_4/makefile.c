// CS 271 - PA 4
// Program name: makefile.c
// Jingru Dou
// 4 March 2021



all: pa4

pa4: pa4.o arrayfunctions.o
	gcc pa4.o arrayfunctions.o -o pa4 -lm
	
arrayfunctions.o: arrayfunctions.c arrayfunctions.h
	gcc -c arrayfunctions.c
	
pa4.o: pa4.c arrayfunctions.h
	gcc -c pa4.h
	
clean: rm -rf*.o
