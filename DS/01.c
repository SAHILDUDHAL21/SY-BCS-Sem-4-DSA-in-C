#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<4;i++)
	{	
		if(i%2==0)
		 k=1;
		for(j=0;j<=i;j++)
		{
			printf("%d",k);
			if(k==0)
			k=1;
			else
			k=0;
		}
		printf("\n");
	}
}
