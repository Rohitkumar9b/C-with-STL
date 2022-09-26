#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;

    if(a>b)
        cout<<a<<" is greater than "<<b;
    else
    {
               if(a==b)
                cout<<a<<" is equal to "<<b;
               else
                cout<<b<<" is greater than "<<a;
    }

    getch();
}
