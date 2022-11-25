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
    TreeNodePtr rootPtr1 = NULL;
    TreeNodePtr rootPtr2 = NULL;
   
   srand(time(NULL)); 
   puts("The numbers being placed in the tree are:");
    puts("This is the test result of an empty tree: ");
   // The first test
   // insert random values between 0 and 14 in the tree
   /*for (unsigned int i = 1; i <= 1; ++i) { 
      int item = rand() % 15;
      printf("%3d", item);
      insertNode(&rootPtr, item);
   } */

   // traverse the tree preOrder
   puts("\n\nThe preOrder traversal is:");
   preOrder(rootPtr);

   // traverse the tree inOrder
   puts("\n\nThe inOrder traversal is:");
   inOrder(rootPtr);

   // traverse the tree postOrder
   puts("\n\nThe postOrder traversal is:");
   postOrder(rootPtr);
   printf("\n");
   
   
   // print the minimum values in the tree
   printf("\n\nThe minimum value in the tree would be: %d", min(rootPtr));

   // print the maximum values in the tree
   printf("\n\nThe maximum value in the tree would be: %d", max(rootPtr));

   // print the sum values in the tree
   printf("\n\nThe sum of the value in the tree would be: %d", sum(rootPtr));
   printf("\n\n");
    
   
   puts("This is the test result that has only one node: ");
   // The second test
   for (unsigned int i = 1; i <= 1; ++i) { 
      int item = rand() % 15;
      printf("%3d", item);
      insertNode(&rootPtr1, item);
   } // end for
   
   // traverse the tree preOrder
   puts("\n\nThe preOrder traversal is:");
   preOrder(rootPtr1);

   // traverse the tree inOrder
   puts("\n\nThe inOrder traversal is:");
   inOrder(rootPtr1);

   // traverse the tree postOrder
   puts("\n\nThe postOrder traversal is:");
   postOrder(rootPtr1);
   printf("\n");

   // print the minimum values in the tree
   printf("\n\nThe minimum value in the tree would be: %d", min(rootPtr1));

   // print the maximum values in the tree
   printf("\n\nThe maximum value in the tree would be: %d", max(rootPtr1));

   // print the sum values in the tree
   printf("\n\nThe sum of the value in the tree would be: %d", sum(rootPtr1));
   printf("\n\n");
   
   
   puts("This is the test result that has two or more nodes: ");
   // The third test
   for (unsigned int i = 1; i <= 10; ++i) { 
      int item = rand() % 15;
      printf("%3d", item);
      insertNode(&rootPtr2, item);
   } // end for
   
   // traverse the tree preOrder
   puts("\n\nThe preOrder traversal is:");
   preOrder(rootPtr2);

   // traverse the tree inOrder
   puts("\n\nThe inOrder traversal is:");
   inOrder(rootPtr2);

   // traverse the tree postOrder
   puts("\n\nThe postOrder traversal is:");
   postOrder(rootPtr2);
   printf("\n");
   
   
   // print the minimum values in the tree
   printf("\n\nThe minimum value in the tree would be: %d", min(rootPtr2));

   // print the maximum values in the tree
   printf("\n\nThe maximum value in the tree would be: %d", max(rootPtr2));

   // print the sum values in the tree
   printf("\n\nThe sum of the value in the tree would be: %d", sum(rootPtr2));
   printf("\n\n");
   
   
} 

