#include<iostream>
using namespace std;
int main()
{
	int a;
	for(a=1;a<=10;a++)
	{
		cout<<"\n hello "<<a;
	}
	for(a=11;a<=20;a++)
	{
		cout<<"\n\t hello "<<a;
	}
	for(a=21;a<=30;a++)
	{
		cout<<"\n\t\t hello "<<a;
	}
	for(a=31;a<=40;a++)
	{
		cout<<"\n\t\t\t hello "<<a;
	}
	for(a=41;a<=50;a++)
	{
		cout<<"\n\t\t\t\t hello "<<a;
	}
		cout<<"\n \t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~ ";
	for(a=50;a>=41;a--)
	{
		cout<<"\n\t\t\t\t hello "<<a;
	}
	for(a=40;a>=31;a--)
	{
		cout<<"\n\t\t\t hello "<<a;
	}
	for(a=30;a>=21;a--)
	{
		cout<<"\n\t\t hello "<<a;
	}
	for(a=20;a>=11;a--)
	{
		cout<<"\n\t hello "<<a;
	}
	for(a=10;a>=1;a--)
	{
		cout<<"\n hello "<<a;
	}
	return 0;
}