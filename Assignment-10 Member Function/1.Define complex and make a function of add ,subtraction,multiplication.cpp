#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    float a;
    float b;
public:
    void setData(float a,float b)
    {
        this->a=a; this->b=b;
    }
    void showData()
    {
        cout<<"\n"<<a<<" + i"<<b;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.a=(a*C.a-b*C.b);
        temp.b=(a*C.b+b*C.a);
        return temp;
    }
    Complex operator/(Complex C)
    {
        Complex temp;
        temp.a=(a*C.a+b*C.b)/((C.a*C.a)+(C.b*C.b));
        temp.b=(b*C.a-a*C.b)/((C.a*C.a)+(C.b*C.b));
        return temp;
    }
   /* bool operator==(Complex C)
    {
        if(a==C.a||b==C.b)
            return true;
        else
            return false;
    }*/
    bool operator==(Complex C)
    {
        return a==C.a||b==C.b;
    }
    Complex operator-()
    {
        Complex temp;
        temp.a=-a;
        temp.b=-b;
        return temp;
    }
    Complex operator++()
    {
        Complex temp;
        temp.a=a+1;
        temp.b=b+1;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(4,6);
    c1.showData();
    c2.setData(4,5);
    c2.showData();
    c3=c1/c2;
    c3.showData();
    c4=c1*c2;
    c4.showData();
    if(c1==c2)
        cout<<"\nObjects are same";
    else
        cout<<"\nDifferent Values";
    c1=-c2;
    c1.showData();
    c5=++c3;
    c5.showData();
    getch();
}
