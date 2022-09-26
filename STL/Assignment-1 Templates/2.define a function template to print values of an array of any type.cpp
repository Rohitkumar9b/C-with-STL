#include<iostream>
#include<array>
using namespace std;
template<class X,class Y>
class Array1
{
    void printArray(X a[],Y n)
    {
        for(int i=0,i<n;i++)
            cout<<a[i]<<" ";
    }
};

int main()
{
    int a[10]={1,3,4,6,8,5,4,6,8,10};
    //for(int i=0;i<10;i++)
        //cin>>a[i];
    printArray(a,10);
}
