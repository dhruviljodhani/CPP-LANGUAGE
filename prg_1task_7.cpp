#include<iostream>
using namespace std; 
int main()
{
/*	int a=200,b=500,c=50;
	printf(" enter 1st number = ");
	scanf("%d",&a);
	printf(" enter 2nd number = ");
	scanf("%d",&b);
	printf(" enter 3rd number = ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("\na (%d) is largest number",a);
	}
	else
	{
	if(b>c)
	{
		printf("\nb (%d) is largest number",b);
	}
	else
	{
		printf("\nc (%d) is largest number",c);
	}
	}
	return 0;*/





	int a,b,c,d,e;
	cout<<" enter 1st number = ";
	cin>>a;
	cout<<" enter 2nd number = ";
	cin>>b;
	cout<<" enter 3rd number = ";
	cin>>c;
	cout<<" enter 4th number = ";
	cin>>d;
	cout<<" enter 5th number = ";
	cin>>e;
	if(a>b && a>c && a>d && a>e)
	{
		cout<<"\na (%d) is largest number",a;
	}
	else if(b>c && b>d && b>e) 
	{
		cout<<"\nb (%d) is largest number",b;
	}
	else if(c>d && c>e)
	{
		cout<<"\nc (%d) is largest number",c;
	}
	else if(d>e)
	{
		cout<<"\nd (%d) is largest number",d;
	}
	else
	{
		cout<<"\ne (%d) is largest number",e;
	}
	return 0;
}