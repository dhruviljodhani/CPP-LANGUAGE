#include<iostream>
using namespace std;
int main()
{
	float price,qty,amount;
	cout<<"enter your price : ";
	cin>>price;
	cout<<"enter your qty : ";
	cin>>qty;
	/*price=price*qty;*/
	if (price<=1000)
	{ 
		amount=(price-0.5)*0.9;
	}
	else if (price>1001 && price<=5000)
	{
		amount=(1000-0.10)*0.12+(price-1000);
	}
	else 
	{
		amount=(5000-0.15)*0.28+(price-5000);
	}
	if (amount>=5000)
	{
		amount=amount-0.15*0.28;
	}
		/*amount=amount-discount;*/
		cout<<"your total amount = "<<amount;
		return 0;
}