#include<iostream>
#include<conio.h>
using namespace std;
class box
{
private:
    int l,b,h;
public:
    box(int x.int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    box(int a)
    {
        l=a;
        b=a;
        h=a;
    }
    box(box &x)
    {
        l=x.l;
        b=x.b;
        h=x.h;
    }
    void setDimension(int len,int breadth,int height)
    {
        l=len;
        b=breadth;
        h=height;
    }
    void display()
    {
        cout<<"The dimension of cuboid is \nlength="<<l<<"\nbreadth="<<b<<"\nheight="<<h<<endl;
    }
    int volume()
    {
        return l*b*h;
    }
};
int main()
{
    box cuboid;
    cuboid.setDimension(30,20,10);
    cuboid.display();
    cout<<"the volume of cuboid is "<<cuboid.volume()<<endl;
    getch();
}
