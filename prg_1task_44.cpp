#include<iostream>
using namespace std;
int main()
{
	int a[5],b[5];
	int i,v;
	for(i=0;i<5;i++)
	{		
			cout<<"enter a[%d] : "<<i+1;
			cin>>a[i];
		
	}
	for(v=0;v<5;v++)
	{
		
			cout<<"\tenter b[%d] : "<<v+1;
			cin>>b[v];
		
	}
	
	cout<<"\n-----------array-----------\n";
	for(i=0;i<5;i++)
	{
		cout<<"\n a  : "<<i+1,a[i];
	}
	for(v=0;v<5;v++)
	{
		cout<<"\n b  : "<<v+1,b[v];
	}
}