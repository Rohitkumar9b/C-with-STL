#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    while(n>0)
    {
        if(n%10==8||n%10==9)
        {
            cout<<"NOt ocatal number";
            break;
        }
        if(n<8)
            cout<<"octal number";
        n=n/10;
    }
    getch();
}
