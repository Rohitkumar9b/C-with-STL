#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
private:
    int a;  //second
    int b;  //minutes
    int c;  //hour
public:
    void setTime()
    {
        float m,h,x,y,z;
        cout<<"Enter sec,min and hr respectively";
        cin>>a;
        if(a>60)
        {
            m=a/60;
            z=a%60;
            a=z;
        }
        cin>>b;
        if(m>0)
            x=b+m;
            b=x;
        if(b>60)
        {
            h=b/60;
            b=b%60;
        }
        cin>>c;
        if(h>0)
            y=c+h;
            c=y;
    }
    void showTime()
    {
        cout<<c;
        if(c>1)
            cout<<"hrs ";
        else
            cout<<"hr ";
        cout<<b;
        if(b>1)
            cout<<"mins ";
        else
            cout<<"min ";
        cout<<a;
        if(a>1)
            cout<<"secs ";
        else
            cout<<"sec ";
    }
};
int main()
{
    Time t;
    t.setTime();
    t.showTime();
}
