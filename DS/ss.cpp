#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div1(int a,int b)
{
	return a/b;
}
int main()
{
	int a,b,ch;
	cout<<"\n\n\t\t\t\t\t\t My Simple Calculator \n";
	cout<<"\n 1. Addition : ";
	cout<<"\n 2. Subtraction : ";
	cout<<"\n 3. Multiplication : ";
	cout<<"\n 4. Division : ";
	do
	{
	    cout<<"\n\nSelect Opertation :: ";
	    cin>>ch;
	    switch(ch)
	    {
			case 1:
					cout<<"\n\nEnter First Number :: ";
					cin>>a;
					cout<<"\nEnter Second Number :: ";
					cin>>b;
					cout<<"\n";
					cout<<a;
					cout<<" + ";
					cout<<b;
					cout<<" = ";
					cout<<add(a,b);
					break;
			case 2:
					cout<<"\nEnter First Number :: ";
					cin>>a;
					cout<<"\nEnter Second Number :: ";
					cin>>b;
					cout<<"\n";
					cout<<a;
					cout<<" - ";
					cout<<b;
					cout<<" = ";
					cout<<sub(a,b);
					break;
			case 3:
					cout<<"\nEnter First Number :: ";
					cin>>a;
					cout<<"\nEnter Second Number :: ";
					cin>>b;
					cout<<"\n";
					cout<<a;
					cout<<" * ";
					cout<<b;
					cout<<" = ";
					cout<<mul(a,b);
					break;	
			case 4:
					cout<<"\nEnter First Number :: ";
					cin>>a;
					cout<<"\nEnter Second Number :: ";
					cin>>b;
					cout<<"\n";
					cout<<a;
					cout<<" / ";
					cout<<b;
					cout<<" = ";
					cout<<div1(a,b);	
					break;
			case 5: cout<<"\nInvalid Choice";
					break;		
		}
	}while(ch<6);
}
