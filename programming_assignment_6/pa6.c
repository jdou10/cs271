// CS 271 - PA 6
// Program name: pa6.c
// Jingru Dou
// 18 March 2021

// Fig. 12.19: fig12_19.c
// Creating and traversing a binary tree 
// preorder, inorder, and postorder
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "binaryTree.h"

// function main begins program execution
int main(void)
{ 
   TreeNodePtr rootPtr = NULL; // tree initially empty

   srand(time(NULL)); 
   puts("The numbers being placed in the tree are:");

   // insert random values between 0 and 14 in the tree
   for (unsigned int i = 1; i <= 10; ++i) { 
      int item = rand() % 15;
      printf("%3d", item);
      insertNode(&rootPtr, item);
   } 

   // traverse the tree preOrder
   puts("\n\nThe preOrder traversal is:");
   preOrder(rootPtr);

   // traverse the tree inOrder
   puts("\n\nThe inOrder traversal is:");
   inOrder(rootPtr);

   // traverse the tree postOrder
   puts("\n\nThe postOrder traversal is:");
   postOrder(rootPtr);
   printf("\n\n");
   
   
   // print the minimum values in the tree
   printf("\n\nThe minimum value in the tree would be: %d", min(rootPtr));

   // print the maximum values in the tree
   printf("\n\nThe maximum value in the tree would be: %d", max(rootPtr));

   // print the sum values in the tree
   printf("\n\nThe sum of the value in the tree would be: %d", sum(rootPtr));
   printf("\n\n");
    
   return 0;
} 

