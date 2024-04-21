#include<stdio.h>
#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node)) 
#define MAX 10
struct node
{
    int data;
    struct node* left, *right;
    
};
struct queue
{
    struct node* data1[MAX];
    int front, rear;
};
struct queue q;
struct node* create(struct node* root)
{
        struct node* newnode,*temp,*parent;
        int i,n,num;
        printf("enter limit:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                newnode=memory;
                printf("enter value:");
                scanf("%d",&num);
                newnode->data=num;
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
                        if(num<temp->data)
                                temp=temp->left;
                        else
                                temp=temp->right;
                }
                if(num<parent->data)
                        parent->left=newnode;
                else
                        parent->right=newnode;
        }
        return root;
}
void inorder(struct node* root) 
{
    struct node* temp=root;
    if(temp!=NULL)
    {
inorder(temp->left) ;
        printf("%d\t",temp->data);
        inorder(temp->right); 
    }
}

void init() 
{
    q.front=q.rear=-1;
}
int isempty() 
{
    if(q.front==-1||q.front>q.rear) 
    return 1;
    else
    return 0;
}
int isfull() 
{
    if(q.rear==MAX-1) 
    return 1;
    else
    return 0;
}
int addq(struct node *root) 
{
    if(isfull())
        printf("q is full");
 else
    {
        if(q.front==-1)
        q.front++;
        q.rear++;
        q. data1[q.rear]=root;
    }
}
struct node* removeq() 
{
    struct node* root;
    if(isempty()) 
        printf("q is empty");
    else
    {

        root=q.data1[q.front];
        q.front++;
        return root;
    }

}
void leveldisp(struct node* root) 
{
int cnt=0;
    struct node* temp;
    addq(root);
    addq(NULL);
    printf("\nlevel-%d=",cnt); 
    while(!isempty())
    {
        temp=removeq();
        if(temp==NULL)
        {
            cnt++;
            if(!isempty())
            {
                addq(NULL);
                printf("\nlevel-%d=",cnt); 
            }
        }
        else
        {
            printf("%d\t",temp->data);
            if(temp->left!=NULL)
            addq(temp->left);
            if(temp->right!=NULL) 
            addq(temp->right);
        }
    }
}