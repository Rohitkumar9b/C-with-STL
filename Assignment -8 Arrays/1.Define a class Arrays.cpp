#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
private:
    int a[10];
public:
    void inputArrayElement()
    {
        int i;
        for(i=0;i<=9;i++)
            cin>>a[i];
    }
    int findMaxElement();
   void Sort(int a[],int Size);
   int sumOfElements(int b[],int Size);
};
int Array::sumOfElements(int b[],int Size)
    {
        int i,s=0;
        for(i=0;i<Size;i++)
            s=s+b[i];
        return s;
    }
 void Array::Sort(int b[],int Size)
    {
        int  r,i,t,k;
        for(r=1;r<=Size-1;r++)
        {
            for(i=0;i<=Size-1-r;i++)
            {
                if(a[i]>a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }
        for(k=0;k<=Size-1;k++)
            cout<<a[i];
    }
int main()
{
    int a[10];
    Array p;
    p.inputArrayElement();
    p.Sort(a,10);

    //p.sumOfElements(a,10);

}
