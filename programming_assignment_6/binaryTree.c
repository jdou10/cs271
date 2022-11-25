// CS 271 - PA 6
// Program name: binaryTree.c
// Jingru Dou
// 18 March 2021

// Fig. 12.19: fig12_19.c
// Creating and traversing a binary tree 
// preorder, inorder, and postorder
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "binaryTree.h"

// insert node into tree
void insertNode(TreeNodePtr *treePtr, int value)
{ 
   // if tree is empty
   if (*treePtr == NULL) {   
      *treePtr = malloc(sizeof(TreeNode));

      // if memory was allocated, then assign data
      if (*treePtr != NULL) { 
         (*treePtr)->data = value;
         (*treePtr)->leftPtr = NULL;
         (*treePtr)->rightPtr = NULL;
      } 
      else {
         printf("%d not inserted. No memory available.\n", value);
      } 
   } 
   else { // tree is not empty
      // data to insert is less than data in current node
      if (value < (*treePtr)->data) {                   
         insertNode(&((*treePtr)->leftPtr), value);   
      }                                         

      // data to insert is greater than data in current node
      else if (value > (*treePtr)->data) {                 
         insertNode(&((*treePtr)->rightPtr), value);     
      }                                        
      else { // duplicate data value ignored
         printf("%s", "dup");
      } 
   } 
} 

// begin inorder traversal of tree
void inOrder(TreeNodePtr treePtr)
{ 
   // if tree is not empty, then traverse
   if (treePtr != NULL) {                
      inOrder(treePtr->leftPtr);         
      printf("%3d", treePtr->data);      
      inOrder(treePtr->rightPtr);        
   }                           
} 

// begin preorder traversal of tree
void preOrder(TreeNodePtr treePtr)
{ 
   // if tree is not empty, then traverse
   if (treePtr != NULL) {                
      printf("%3d", treePtr->data);      
      preOrder(treePtr->leftPtr);        
      preOrder(treePtr->rightPtr);       
   }                           
} 

// begin postorder traversal of tree
void postOrder(TreeNodePtr treePtr)
{ 
   // if tree is not empty, then traverse
   if (treePtr != NULL) {                
      postOrder(treePtr->leftPtr);       
      postOrder(treePtr->rightPtr);      
      printf("%3d", treePtr->data);      
   }                           
} 


// to return the minimum value in the tree
int min(TreeNodePtr treePtr) {
    // it will return 0 if the tree is empty
    if(treePtr == NULL)
        return 0;
    
    // to return the leftmost value
    while(treePtr -> leftPtr != NULL)
        treePtr = treePtr -> leftPtr;
        
        return treePtr -> data;
} // end min

// to return the maximum value in the tree
int max(TreeNodePtr treePtr) {
    // it will return 0 if the tree is empty
     if(treePtr == NULL)
        return 0;
     
     // to return the rightmost value
     while(treePtr -> rightPtr != NULL)
        treePtr = treePtr -> rightPtr;
     
        return treePtr -> data;
} // end max

// to return the sum of the values in the tree
int sum(TreeNodePtr treePtr) {
    // it will return 0 if the tree is empty
    if(treePtr == NULL)
        return 0;
    
    // to get both the left and right sum values
    int left = sum(treePtr -> leftPtr);
    int right = sum(treePtr -> rightPtr);

    return left + treePtr -> data + right;
} // end sum

/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
