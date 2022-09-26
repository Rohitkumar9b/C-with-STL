#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
    int a;
    int b;
public:
    void setData(int x,int y)
    {
        a=x; b=y;
    }
    void showData()
    {
        cout<<a<<" + "<<b<<"i\n";
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.a=(a*C.a-b*C.b);
        temp.b=(b*C.a+a*C.b);
        return temp;
    }
    bool operator==(Complex C)
    {
        if(a==C.a&&b==C.b)
        return true;
        return false;
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
    Complex C1,C2,C3,C4;
    C1.setData(6,5);
    C1.showData();
    C2.setData(6,5);
    C2.showData();
    C3=C1+C2;
    if(C1==C2)
        cout<<"Same object\n";
    else
        cout<<"Different object\n";
    C3.showData();
    C4=-C2;
    C4.showData();
    getch();
}
