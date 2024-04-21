/*Implement a Binary search tree (BST) library (btree.h) with operations – create, insert,
preorder. Write a menu driven program that performs the above operations*/

#include<stdio.h>
#include<stdlib.h>
#define memory (NODE *)malloc(sizeof(NODE))

typedef struct tree
{
	int data;
	struct tree *left,*right;
}NODE;

NODE * create(NODE *root)
{
	NODE *newnode,*temp,*parent;
	int i,n;
	printf("Enter Limit ::");
	scanf("%d",&n);
	printf("\nEnter Elements ::");
	for(i=0;i<n;i++)
    {
    	newnode=memory;
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

void *postorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		preorder(temp->left);
		preorder(temp->right);
		printf("%d\t",temp->data);
	}
}

NODE * insert(NODE *root)
{
	NODE *newnode,*temp,*parent;
	int i,n;
	
	
	printf("\nEnter Element ::");
    
    	newnode=memory;
    	scanf("%d",&newnode->data);
    	newnode->left=NULL;
    	newnode->right=NULL;
    	if(root==NULL)
    	{
    		root=newnode;
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
	
	return root;


}

int main()
{
	NODE *root=NULL;
	int ch;

	do{
		printf("\n1 :: Create\n2 :: Insert\n3 :: Postorder\n");
		printf("\nEnter choice :: ");
		scanf("%d",&ch);

		switch(ch)
		{

			case 1	:	root=create(root);
						break;
			case 2	:	root=insert(root);
						break;
			case 3	:	printf("\nBinary Search In  POSTORDER =\n");
						postorder(root);
						break;
                        default :	printf("Incorrect choice ............");
			
		}
	}while(ch<4);
}
