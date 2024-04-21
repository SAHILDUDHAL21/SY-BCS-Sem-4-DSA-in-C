#include<stdio.h>
#define max 20

struct queue
{
        int data[max],front,rear;
}q;

int isempty()
{
        if(q.front==q.rear)
                return 1;
        else
                return 0;
}

void init()
{
        q.front=q.rear=-1;
}

void add(int num)
{
        q.data[++q.rear]=num;
}

int rmq()
{
        int num;
        num=q.data[++q.front];
        return num;
}

void bfs(int a[10][10],int n)
{
        int i,j,v;
        int visited[10]={0};
        init();
        visited[1]=1;
        add(1);
        while(!isempty())
        {
                v=rmq();
                printf("V%d--> ",v);
                for(i=1;i<=n;i++)
                        for(j=1;j<=n;j++)
                        {
                                if(a[i][j]==1 && visited[j]==0)
                                {
                                        add(j);
                                        visited[j]=1;
                                }
                        }
        }
}

int main()
{
        int a[10][10],i,j,n;

        printf("Enter No Of Vertices :: ");
        scanf("%d",&n);

        printf("Enter Adjecency Matrix :: ");
        for(i=1;i<=n;i++)
                for(j=1;j<=n;j++)
                        scanf("%d",&a[i][j]);
        
          
        bfs(a,n);
}
