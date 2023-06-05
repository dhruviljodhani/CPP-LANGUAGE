#include<iostream>
using namespace std;
int main()
{
	char value;
	cout<<"enter value = ";
	cin>>value;
	if(value>=65 && value<=90)
	{
		value=value+32;
		cout<<"%c"<<value;
	}
	else if(value>=97 && value<=122)
	{
		value=value-32;
		cout<<"%c"<<value; 
	}
	return 0;
}