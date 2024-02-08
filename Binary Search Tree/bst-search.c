#include<stdio.h>
#include<stdlib.h>

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

void *search(NODE *root,int num)
{
	NODE *temp=root;

	while(temp!=NULL)
	{
		if(num==temp->data)
			printf("Data is Found ");
		if(temp->data>num)
			temp=temp->left;
		else
			temp=temp->right;
	}
}

int main()
{
	int n;
	NODE *root=NULL;
	root=create(root);

	printf("\nEnter Number To Search");
	scanf("%d",&n);
	search(root,n);
}