#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setreal(int r)
    {
        a=r;
    }
    void setimag(int i)
    {
        b=i;
    }
    void show()
    {
        cout<<"The complex number is "<<a<<"+j"<<b<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setreal(4);
    c1.setimag(5);
    c1.show();
}
