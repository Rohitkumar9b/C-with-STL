#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int n,s=0,q,r;
    cout<<"Enter a number";
    cin>>n;
    do
    {
        r=n%10;
        q=n/10;
        n=q;
        s=s+r;
    }while(n!=0);
    cout<<" sum of digits is "<<s;
    getch();
}

