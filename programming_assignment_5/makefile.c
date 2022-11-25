// CS 271 - PA 5
// Program name: makefile.c
// Jingru Dou
// 11 March 2021



all: pa5

pa5: pa5.o sortingfunctions.o
	gcc pa5.o sortingfunctions.o -o pa5
		
pa5.o: pa5.c sortingfunctions.h
	gcc pa5.c -c
	
sortingfunctions.o: sortingfunctions.c sortingfunctions.h
	gcc sortingfunctions.c -c
	
clean: 
	rm -rf *.o
