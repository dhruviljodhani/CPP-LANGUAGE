#include<iostream>
using namespace std;
int main()
{

    char ch='A';
    int a,b;

    for ( a = 1; a <= 5; a++)
    {

        for ( b = 1; b <= 5; b++)
        {
            cout<<"\t"<<ch;
            ch+=1;
        }
        cout<<"\n";
    }

}