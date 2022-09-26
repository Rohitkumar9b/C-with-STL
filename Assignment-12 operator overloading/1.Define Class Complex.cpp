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

};
int main()
{
    Complex C1,C2,C3;
    C1.setData(4,5);
    C1.showData();
    C2.setData(5,5);
    C2.showData();
    C3=C1+C2;
    C3.showData();
    getch();
}

