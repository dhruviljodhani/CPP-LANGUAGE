#include<iostream>
using namespace std;
int main()
{
	float bs,gs,da,hra;
	cout<<"enter basic salary : \n";
	cin>>bs;
	if(bs > 5000)
	{
		hra = bs * 10 / 100; 
		da = bs * 90 / 100;
	}
	else
	{
		hra = 600;
		da = bs * 95 / 100;
	}
		gs = bs + da + hra;
	cout<<"gross salary is rs "<<gs;
	return 0;
} 