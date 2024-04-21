/*Q 2. Write a C program that accepts the vertices and edges of a graph and store it as an
adjacency matrix. Implement function to traverse the graph using Depth First Search (DFS)
traversal.*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int visited[10]={0},a[10][10],n;

struct stack 
{
    int top,data[MAX];
}s;

void init() 
{
    s.top=-1;
}

void push(int num) 
{
    s.data[++s.top]=num;
}

int pop() 
{
    return s.data[s.top--];
}

int empty() 
{
    return (s.top==-1);
}

int dfs(int i) 
{
    int j, tmp;
    visited[i] = 1;
    push(i);
    printf("v%d\t",i);

    while (!empty()) 
    {
        tmp=pop();

        for (j=1;j<=n;j++) 
        {
            if (a[tmp][j]==1 && visited[j]==0) 
            {
                visited[j]=1;
                push(j);
                printf("v%d\t",j);
            }
        }
    }
}

int main() 
{
    int i,j;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter matrix:\n");
    for (i=1;i<=n;i++) 
    {
        for (j=1;j<=n;j++) 
        {
            scanf("%d",&a[i][j]);
        }
    }

    dfs(1);
    return 0;
}