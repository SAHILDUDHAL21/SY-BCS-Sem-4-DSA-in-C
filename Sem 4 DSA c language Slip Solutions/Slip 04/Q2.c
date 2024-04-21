//Q 2. Write a program which uses binary search tree library and counts the total nodes and
//totalleaf nodes in the tree.
//int countLeaf(T) – returns the total number of leaf nodes from BST.

#include<stdio.h>
#include "BST.h"
int main()
{
        int n;
        NODE *root=NULL;
        root=create(root);

        printf("\nNo of Leaf Node =%d",cntleaf(root));
}