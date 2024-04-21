/*Write a C program that accepts the vertices and edges of a graph and store it as an adjacency
matrix. Implement functions to print indegree of all vertices of graph.*/

#include<stdio.h>

void degree(int a[10][10],int n)
{
     int i,j,insum=0,out=0;
     for(i=0;i<n;i++)
     {
          insum=out=0;
          for(j=0;j<n;j++)
          {
               insum=insum+a[j][i];
               out=out+a[i][j];
          }
          printf("\nV%d Indegree = %d , Outdegree= %d, Total degree =%d",i+1,insum,out,insum+out);
     }

}

int main()
{
     int a[10][10],i,j,n;
     printf("Enter no of Vertices :: ");
     scanf("%d",&n);
     printf("Enter adj matrix :: \n");
     for(i=0;i<n;i++)
          for(j=0;j<n;j++)
               scanf("%d",&a[i][j]);

     degree(a,n);
}