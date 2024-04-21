//Q 1. Write a C program that accepts the vertices and edges of a graph. Create adjacency list.


#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head[10];

void create(int a[10][10],int n)
{
	struct node *temp,*newnode;
	int i,j;
	for(i=1;i<=n;i++)
	{
		head[i]=NULL;
		for(j=1;j<=n;j++)
		{
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=j;
			newnode->next=NULL;
			if(head[i]==NULL)
			{
				head[i]=temp=newnode;
			}
			else
			{
				temp->next=newnode;
				temp=newnode;
			}
		}
	}
}

void disp(int n)
{
	struct node *temp;
	int i;
	for(i=1;i<=n;i++)
	{
		printf("\n Head%d-->",i);
		for(temp=head[i];temp!=NULL;temp=temp->next)
		{
			printf("%d-->",temp->data);
		}
		printf("NULL");
	}
}
int main()
{
	int a[10][10],i,j,n;
	printf("Enter limit ::");
	scanf("%d",&n);
	printf("Enter Graph In matrix :: \n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	create(a,n);
	disp(n);
}
