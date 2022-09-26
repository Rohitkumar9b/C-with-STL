#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int p,b,h,k,t;
    cout<<"Enter the sides of a triangle";
    cin>>p>>b>>h;
    if(h>=p)
    {
        if(h>=b);
        else
        {
            t=h;
            h=b;
            b=t;
        }
    }
    else
    {
        if(p>=b)
        {
            t=h;
            h=p;
            p=t;
        }
        else
        {
            t=h;
            h=b;
            b=t;
        }
    }
    k=p*p+b*b;
    if(k==h*h)
        cout<<"Right angled triangle";
    else
        cout<<"NOt";
    getch();
}
