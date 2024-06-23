#include<stdio.h>
void printdist(int km,int m,int cm)
{
	printf("Kilometer =%d\nMeter=%d\nCentimeter=%d ",km,m,cm);
}
void calculate(int km,int m,int cm,int new)
{
	cm=cm+new;
	while(cm>100)
	{
			cm=cm-100;
			m=m+1;
	}
	while(m>1000)
	{
		m=m-1000;
		km=km+1;
	}
	printdist(km,m,cm);
}
int main()
{
	int km,m,cm,new;
	printf("Enter distance in Kelometer :: ");
	scanf("%d",&km);
	printf("Enter distance in Meter :: ");
	scanf("%d",&m);
	printf("Enter distance in Centimeter :: ");
	scanf("%d",&cm);
	
	printf("\nEnter New Distance to Add (in Centimeter) :: ");
	scanf("%d",&new);
	
	calculate(km,m,cm,new);
}
