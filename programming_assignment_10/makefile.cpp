# CS 271 - PA 10
# Program name: makefile
# Jingru Dou
# 29 April 2021


all: PA10

PA10: PA10.o Date.o
	g++ -std=c++11 PA10.o Date.o -o PA10
		
PA10.o: PA10.cpp Date.h
	g++ -std=c++11 -c PA10.cpp 
	
Date.o: Date.cpp Date.h
	g++ -std=c++11 -c Date.cpp
	
clean: 
	rm -rf *.o
