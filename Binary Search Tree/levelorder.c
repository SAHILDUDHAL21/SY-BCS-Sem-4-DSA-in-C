#include<stdio.h>
#include<stdlib.h>
#define Max 50

typedef struct tree
{
	int data;
	struct tree *left,*right;
}NODE;

struct queue
{
	NODE *data[Max];
	int front,rear;
}*q;

void initq()
{
	q=(struct queue*)malloc(sizeof(struct queue*));
	q->front=q->rear=-1;
}

int isfull()
{
	return (q->rear==Max-1);
}

int isempty()
{
	return (q->front==q->rear);
}

void addq(NODE *root)
{
	if(isfull())
		printf("queue is full");
	else
		q->data[++q->rear]=root;
}

NODE *delq()
{
	if(isempty())
		printf("queue is empty");
	else
		return (q->data[++q->front]);
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

void levelorder(NODE *root)
{
	int level=0;
	NODE *temp;
	initq();
	addq(root);
	addq(NULL);
	printf("\nLevel= %d :: ",level);
	while(!isempty())
	{
		temp=delq();
		if(temp==NULL)
		{
			level++;
			if(!isempty())
			{
				addq(NULL);
				printf("\nLevel= %d :: ",level);
			}
		}
		else
		{
			printf("%d \t",temp->data);
			if(temp->left!=NULL)
				addq(temp->left);
			if(temp->right!=NULL)
				addq(temp->right);

		}
	}
}

int main()
{
	NODE *root=NULL;
	root=create(NULL);
	printf("\nlevel Order :: \n");
	levelorder(root);
}