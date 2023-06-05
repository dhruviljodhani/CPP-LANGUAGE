#include<iostream>
using namespace std;
int main()
{
	int i=1;
	lable:
	if(i<=10)
	cout<<"\n * "<<i++;
	   goto lable;
	return 0;
}