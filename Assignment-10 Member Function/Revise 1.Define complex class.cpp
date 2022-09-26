#include<iostream>
using namespace std;
ostream & operator<<(ostream &out,Complex &C)
{
    out<<C.r;
    out<<" + i"<<C.i<<endl;
    return out;
}
istream & operator>>(istream &in,Complex &C)
{
    cout<<"Enter a real part";
    in>>C.r;
    cout<<"Enter a imaginary part;
    in>>C.i;
    return in;
}
class Complex
{
    float r,i;
public:
    void setData(float r,float i)
    {
        this->r=r;
        this->i=i;
    }
    void showData()
    {
        cout<<r<<" + j"<<i<<endl;
    }
    Complex operator+(Complex C);
    {
        Complex temp;
        temp.r=r+C.r;
        temp.i=i+C.i;
        return temp;
    }
    Complex operator-(Complex C)
    {
        Complex temp;
        temp.r=r-C.r;
        temp.i=i-C.i;
        return temp;
    }
    Complex operator*(Complex C)
    {
        Complex temp;
        temp.a=(a*C.a-b*C.b);
        temp.b=(a*C.b+b*C.a);
        return temp;
    }
    ostream operator<<()
    {
        ostream temp;
        temp=
    }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
};
ostream & operator << (ostream &out, const Complex &c)
{
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

istream & operator >> (istream &in,  Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}
