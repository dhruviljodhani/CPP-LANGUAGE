 #include<iostream>
 using namespace std;
int main()
{
	int a[5],b[5];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<"enter a :"<<i+1;
		cin>>a[i];	
	}
	for(i=0;i<5;i++)
	{
		cout<<"enter b :"<<i+1;
		cin>>b[i];
	}

cout<<"\n\t(a)\t\t(b)\t   total of a=b\n";
for(i=0;i<5;i++)
        {
			cout<<"  \n  \t\t       \t\t        "<<a[i],b[i],a[i]+b[i];
		}
	cout<<"\n";

return 0;
} 