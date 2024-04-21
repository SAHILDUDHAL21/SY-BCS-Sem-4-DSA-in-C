//Q 2. Write a program which uses binary search tree library and counts the total nodes and
//totalleaf nodes in the tree.
//int countLeaf(T) – returns the total number of leaf nodes from BST.

#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct node 
{
  int data;
  struct node *left,*right;
}NODE;

int cntleaf(NODE *root)
{
        static int cnt=0;
        NODE *temp=root;
        if(temp!=NULL)
        {
                if((temp->left==NULL)&&(temp->right==NULL))
                        cnt++;
                cntleaf(temp->left);
                cntleaf(temp->right);
        }
        return cnt;
}

NODE * create(NODE *root)
{
        NODE *newnode,*temp,*parent;
        int i,n;
        printf("Enter Limit ::");
        scanf("%d",&n);
        printf("\nEnter Elements ::");
        for(i=0;i<n;i++)
        {
            newnode=(NODE *)malloc(sizeof(NODE));
            scanf("%d",&newnode->data);
            newnode->left=NULL;
            newnode->right=NULL;
            if(root==NULL)
                {
                    root=newnode;
                    continue;
                }
                temp=root;
                while(temp!=NULL)
                {
                        parent=temp;
                        if(newnode->data < temp->data)
                        temp=temp->left;
                        else
                         temp=temp->right;
                }
                if(newnode->data < parent->data)
                 parent->left=newnode;
                else
                  parent->right=newnode;
        }
        return root;
}

