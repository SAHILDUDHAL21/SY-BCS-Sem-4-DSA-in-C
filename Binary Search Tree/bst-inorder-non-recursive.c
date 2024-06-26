#include<stdio.h>
#include<stdlib.h>
#define MAX 100


typedef struct node
{
   int data;
   struct node *left,*right;
}NODE;

struct stack
{
	struct node *data[MAX];
	int top;
}s;

void init()
{
   s.top=-1;
}

int isempty()
{
	if(s.top==-1)
	   return 1;
	else
	   return 0;
}
int isfull()
{
	if(s.top==MAX-1)
	   return 1;
	else
	  return 0;
}
void push(struct node *temp)
{
	if(isfull())
	   printf("stack is full");
	else
	{
		s.top++;
		s.data[s.top]=temp;
	}
}
struct node *pop()
{
	struct node *temp;
	if(isempty())
	   printf("stack is underflow");
	else
	{
		temp=s.data[s.top];
		s.top--;
	}
  return temp;
}
NODE * create(NODE *root)
{
   int i,n;
   NODE *temp,*parent,*newnode;
   printf("Enter limit:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      newnode=(NODE*)malloc(sizeof(NODE));
      printf("Enter value:");
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
        if(newnode->data<temp->data)
             temp=temp->left;
        else
             temp=temp->right;
     } 
     if(newnode->data<parent->data)
        parent->left=newnode;
     else
        parent->right=newnode;
   }
  return root;
}

void inorder(NODE *root)
{
   NODE *temp=root;
   while(temp!=NULL)
   {
      push(temp);
	  temp=temp->left;	
   }   
   while(!isempty())
   {
   	 temp=pop();
   	 printf("%d\t",temp->data);
   	 temp=temp->right;
   	 while(temp!=NULL)
   	 {
   	   push(temp);
   	   temp=temp->left;	
	    }
   }
}
int main()
{
   NODE *root=NULL;
   init();
   root=create(root);
   printf("\n Inorder Display:");
   inorder(root);
}