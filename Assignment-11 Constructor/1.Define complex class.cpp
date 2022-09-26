#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    Complex(float x,float y)
    {
        a=x;
        b=y;
    }
    Complex()
    {
        a=0;
        b=0;
    }
    void setData(float a,float b)
    {
        this->a=a;
        this->b=b;
    }
    void showData()
    {
        cout<<"The complex number is "<<a<<"+j"<<b<<endl;
    }
};
int main()
{
    Complex c1(2,3),c2;
    c1.showData();
    c2.showData();


}
