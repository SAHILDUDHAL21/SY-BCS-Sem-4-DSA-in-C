#include<stdio.h>
int accept(int a[20][20],int n)
{
	int i,j;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==0)
			{
				a[i][j]=999;
			}
		}
		
	return a;
}
int main()
{
	int n,a[20][20],e,i,j,a,b,u,v;
	int visited[20]={0};
	a=accept(a,n);
	visited[1]=1;
	for(e=1;e<=n;e++)
	{
		for(i=1;i<=n;i++)
		{
			min=999;
			for(j=1;j<=n;j++)
		}
	}
}
