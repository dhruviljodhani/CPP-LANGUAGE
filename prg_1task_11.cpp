#include<iostream>
using namespace std;
int main()
{
	int PRODUCTNAME,PRICE,QTY,RATE,DISCOUNT,RATEAD,GST,BILLAMOUNT;
	cout<<"PAVAN TRANSPORT COMPANY ";
	cout<<"\nENTER PRODUCT NAME : ";
	cin>>PRODUCTNAME;
	cout<<"ENTER PRICE = ";
	cin>>PRICE;
	cout<<"ENTER QTY = "; 
	cin>>QTY;
	RATE=PRICE*QTY;
	DISCOUNT=RATE*0.10; 
	RATEAD=RATE-DISCOUNT;
	GST=RATEAD*0.18;
	BILLAMOUNT=RATEAD+GST; 
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*PAVAN TRANSPORT COMPANY*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
	cout<<"\n                   PRODUCTNAME \tPRICE\tQTY\tRATE\tDISCOUNT(10%)\tRATEAD\tGST(18%)\tBILLAMOUNT";
	cout<< "\n\t\t\t\t\t\t\t\t"<<PRODUCTNAME,PRICE,QTY,RATE,DISCOUNT,RATEAD,GST,BILLAMOUNT;
	return 0;
}