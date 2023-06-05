#include<iostream>
using namespace std;
int main()
{

    char a='A';

    while(a <= 'E')
    {
        char b='A';
        while(b <= a)
        {
            cout<<"\t"<<a;
            b++;
        }
            cout<<"\n";
            a++;        
    }
    return 0;
}