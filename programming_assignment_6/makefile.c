# CS 271 - PA 6
# Program name: makefile
# Jingru Dou
# 18 March 2021



all: pa6

pa6: pa6.o binaryTree.o
	gcc pa6.o binaryTree.o -o pa6
		
pa6.o: pa6.c binaryTree.h
	gcc pa6.c -c
	
binaryTree.o: binaryTree.c binaryTree.h
	gcc binaryTree.c -c
	
clean: 
	rm -rf *.o
