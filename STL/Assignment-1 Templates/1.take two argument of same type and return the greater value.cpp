#include<iostream>
#include<conio.h>
using namespace std;
template<class X>
X Big(X a,X b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<Big(4.564,5.143);
    getch();
}
