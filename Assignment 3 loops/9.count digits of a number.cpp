#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int n,i=0,q;
    cout<<"Enter a number";
    cin>>n;
    do
    {
        q=n/10;
        n=q;
        i++;
    }while(n!=0);
    cout<<"digit is "<<i;
    getch();
}
