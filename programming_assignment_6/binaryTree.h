// CS 271 - PA 6
// Program name: binaryTree.h
// Jingru Dou
// 18 March 2021

// binaryTree.h
//
// struct definition and prototypes for binary tree functions
// 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef BINARY_TREE
#define BINARY_TREE

// node structure definition                            

struct treeNode {                                           
   struct treeNode *leftPtr; // pointer to left subtree 
   int data; // node value                               
   struct treeNode *rightPtr; // pointer to right subtree
}; 

// typedef statements to make it easier to declare node and tree
// variables

typedef struct treeNode TreeNode; // synonym for struct treeNode
typedef TreeNode *TreeNodePtr; // synonym for TreeNode*

// function prototypes
void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);


// to return the minimum value in the tree
int min(TreeNodePtr treePtr);

// to return the maximum value in teh tree
int max(TreeNodePtr treePtr);

// to return the sum of the values in the tree
int sum(TreeNodePtr treePtr);


#endif
