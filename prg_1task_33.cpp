#include<iostream>
using namespace std;
int main()
{
	int i;
	i=1;
    while(i<=10)
	{
	cout<<"\n "<<i;
	i++;
	}
	i=11;
	while(i<=20)
	{
	cout<<"\n \t"<<i;
	i++;
	}
	i=21;
	while(i<=30)
	{
	cout<<"\n \t \t "<<i;
	i++;
	}
	i=31;
	while(i<=40)
	{
	cout<<"\n \t \t \t "<<i;
	i++;
	}
	i=41;
	while(i<=50)
	{
	cout<<"\n \t \t \t \t "<<i;
	i++;
	}
	cout<<"\n \n              ";
	
	i=50;
	while(i>=41)
	{
	cout<<"\n \t \t \t \t "<<i;
	i--;
	}
	i=40;
	while(i>=31)
	{
	cout<<"\n \t \t \t "<<i;
	i--;
	}
	i=30;
	while(i>=21)
	{
	cout<<"\n \t \t "<<i;
	i--;
	}
	i=20;
	while(i>=11)
	{
	cout<<"\n \t "<<i;
	i--;
	}
	i=10;
	while(i>=1)
	{
	cout<<"\n "<<i;
	i--;
	}
	return 0;
}