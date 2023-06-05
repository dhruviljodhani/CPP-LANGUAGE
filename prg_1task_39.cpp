#include<iostream>
using namespace std;
int main()
{

    int a=5,b;

    while( a >= 1)
    {
        b= a;
        while( b >= 1)
        {
            cout<<"\t"<<a;
            b--;
        }
            cout<<"\n"; 
            a--;       
    }
    
}