/*Write a C program that accepts the vertices and edges of a graph and store it as an adjacency
matrix. Implement functions to print indegree of all vertices of graph.*/

#include<stdio.h>

void indgree(int a[10][10],int n)
{
     int i,j,insum=0;
     for(i=0;i<n;i++)
     {
          insum=0;
          for(j=0;j<n;j++)
          {
               insum=insum+a[j][i];
          }
          printf("\nIndergee of %d is %d",i+1,insum);
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

     indgree(a,n);
}