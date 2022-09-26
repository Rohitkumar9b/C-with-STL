#include<bits/stdc++.h>
#include<array>
using namespace std;
class Complex
{
private:
    float a;
    float b;
public:
    Complex()
    {
        a=0;
        b=0;
    }
    void setData(float x,float y)
    {
        a=x;
        b=y;
    }
    void showData()
    {
        cout<<a<<" +j"<<b<<endl;
    }
    Complex operator+(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
};
int main()
{
    array<Complex,3> a1;


}
