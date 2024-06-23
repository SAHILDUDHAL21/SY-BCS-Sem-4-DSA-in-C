#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	int i,j,k,n;
	printf("Enter String :: ");
	scanf("%s",&s1);
	n=strlen(s1);

	for (i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("%c",s1[j]);
		for(j=0;j<=i;j++)
			printf("%c",s1[j]);
		printf("\n");
	}
	for (i=n-1;i>=0;i--)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(j=0;j<=i;j++)
			printf("%c",s1[j]);
		for(j=0;j<=i;j++)
			printf("%c",s1[j]);
		printf("\n");
	}
}
