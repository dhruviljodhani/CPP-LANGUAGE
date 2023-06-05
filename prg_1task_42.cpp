#include<iostream>
using namespace std;
int main()
{
    int a=5,c=5,b;
    z:
    if(a>=1)
  {
    b=1;
    x:
    if(a>=b)
    { 
        cout<<" *";
        b++;
        goto x;
    }
    cout<<"\n";
    c=5;
    y:
    if(c>=a)
    {
        cout<<" ";
        c--;
        goto y;
    }
    a--;
    goto z;
  }  
  return 0;
}
