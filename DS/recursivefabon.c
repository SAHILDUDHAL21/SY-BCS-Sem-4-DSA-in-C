#include<stdio.h>

void fibo(int a,int b,int n)
{
	if(n>0)
	{
		printf("%d\t",a);
		fibo(b,a+b,--n);
	}
}
int main()
{
	int n;
	printf("Enter limit :: ");
	scanf("%d",&n);
	printf("\nFibonaci Series ::\n");
	fibo(0,1,n);
}