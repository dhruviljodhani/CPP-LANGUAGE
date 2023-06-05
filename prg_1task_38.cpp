#include<iostream>
using namespace std;
int main()
{
     int i=1,j,z=11;
     do
    {
      j=1;
      do
      {
        cout<<"\t "<<z++;
        j++;
      }
      while(j<=5);
      z+=5;
      cout<<"\n";
      i++;
    }
      while(i<=5);
return 0;
}