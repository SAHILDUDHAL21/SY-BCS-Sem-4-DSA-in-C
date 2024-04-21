/*Q  Write a C program for the implementation of Floyd Warshall’s algorithm for finding all
pairs shortest path using adjacency cost matrix.*/

#include<stdio.h>

#define INF 999
int n;


void printmatrix(int a[10][10]);

void floydwarshall(int a[10][10])
{
      int i,j,k;
	
	
	//adding vertices
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][k]+a[k][j]<a[i][j])
				{
				
				a[i][j]=a[i][k]+a[k][j];
			}
			}
		}
	}
	printmatrix(a);
}

void printmatrix(int a[10][10])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==INF)
			printf("INF");
			else
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int a[10][10],i,j;
	printf("enter limit");
	scanf("%d",&n);
	printf("enter matrix");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	
	floydwarshall(a);
}
