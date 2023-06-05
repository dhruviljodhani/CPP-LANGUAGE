#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<" enter 1st number ";
	cin>>a;
	cout<<" enter 2nd number ";
	cin>>b;
	c=a*b;
	cout<<c;
	if(c%21==0)
	{
		printf("\n number is divisible 3 and 7 ");
	}
	else
	{
		printf("\n number is not divisible 3 and 7 ");
	}

	
}