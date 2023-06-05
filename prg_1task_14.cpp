#include<iostream>
using namespace std;
int main()
{
	char value;
	cout<<"enter value = ";
	cin>>value;
	if("%c",value=='a'||value=='e'||value=='i'||value=='o'||value=='u')
	{
		cout<<"  chose number is vowel"<<value,value;
	}
	else
	{
		cout<<"  chose number is consonant"<<value,value;
	}
	return 0;
}