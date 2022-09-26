#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int a,b,c,D;
    cout<<"Enter the value of a,b,c";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D>0)
        cout<<"Real and distinct roots";
    if(D==0)
        cout<<"Real and Equal roots";
    if(D<0)
        cout<<"Imaginary roots";
    getch();
}
