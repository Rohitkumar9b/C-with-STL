#include<iostream>
#include<conio.h>
using namespace std;
class Box
{
private:
    int l,b,h;
public:
    void setDimension(int,int,int);
    void DisplayDimension();
    int volume();

};
void Box::setDimension(int a,int d,int c)
{
    l=a; b=d; h=c;
}
void Box::DisplayDimension()
{
    cout<<"length="<<l<<"m breadth="<<b<<"m height="<<h<<"m";
}
int Box::volume()
{
    return l*b*h;
}
int main()
{
  Box cuboid;
  int k;
  cuboid.setDimension(5,4,2);
  cuboid.DisplayDimension();
  k=cuboid.volume();
  cout<<endl<<k<<"m3";

}
