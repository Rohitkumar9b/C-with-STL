#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,r,b=0,a;
    cout<<"Enter a number";
    cin>>n;
    for(i=1;n>0;i++)
    {
        r=n%10;
        n=n/10;
        a=r;
        if(a>b)
            b=a;
    }
    cout<<"greatest value in a number is "<<b;
    getch();
}
