#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    private:
    float real;
    float imaginary;
    public:
        void input()
        {
            cout<<"Enter real part number and imaginary part number";
            cin>>real>>imaginary;
        }
        void display()
        {
            cout<<"\n"<<real<<" + "<<imaginary<<"i";
        }
};
int main()
{
    Complex p;
    p.input();
    p.display();
}
