#include<iostream>
using namespace std;
int main()
{	
    char i='A',j;
    while(i<='E')
   {
     j='A';
     while(j<='E')
     {
       cout<<"\t "<<i;
       j++;
     }
     cout<<"\n";
     i--;
  }
return 0;
}