# CS 271 - PA 11
# Program name: makefile
# Jingru Dou
# 6 May 2021


all: PA11

PA11: PA11.o Date.o LongDate.o
	g++ -std=c++11 PA11.o Date.o LongDate.o -o PA11
		
PA11.o: PA11.cpp Date.h LongDate.h
	g++ -std=c++11 -c PA11.cpp 
	
Date.o: Date.cpp Date.h
	g++ -std=c++11 -c Date.cpp
	
LongDate.o: LongDate.cpp LongDate.h
	g++ -std=c++11 -c LongDate.cpp

clean: 
	rm -rf *.o
