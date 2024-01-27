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
void *inorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		inorder(temp->left);
		printf("%d\t",temp->data);
		inorder(temp->right);
	}
}
void *preorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		printf("%d\t",temp->data);
		preorder(temp->left);
		preorder(temp->right);
	}
}
void *postorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		printf("%d\t",temp->data);
	}
}
int main()
{
	NODE *root=NULL;
	root=create(root);
	
	printf("\nBinary Search In INORDER =\n");
	inorder(root);
	printf("\nBinary Search In  PREORDER =\n");
	preorder(root);
	printf("\nBinary Search In  POSTORDER =\n");
	postorder(root);
	
}