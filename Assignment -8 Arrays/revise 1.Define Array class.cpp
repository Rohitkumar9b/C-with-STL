#include<iostream>
#include<conio.h>
using namespace std;
class Array
{
private:
    int a[10];
public:
    void inputArrayElements()
    {
        for(int i=0;i<10;i++)
        {
            cin>>a[i];
        }
    }
    int findMaxElement()
    {
        int m,i;
        m=a[0];
        for(i=0;i<10;i++)
        {
            if(m<a[i])
                m=a[i];
        }
        return m;
    }
    int findMinElement()
    {
        int m,i;
        m=a[0];
        for(i=0;i<10;i++)
        {
            if(m>a[i])
                m=a[i];
        }
        return m;
    }
    void Sort()
    {
        int i,j,temp;
        for(i=0;i<10;i++)
        {
            for(j=0;j<10-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    void editElement(int index,int newData)
    {
        a[index]=newData;
    }
    int sumofElements()
    {
        int sum=0;
        for(int i=0;i<10;i++)
            sum=sum+a[i];
        return sum;
    }
    float averageofElements()
    {
        return sumofElements()/10.0;
    }
    void view()
    {
        for(int i=0;i<10;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    Array A;
    A.inputArrayElements();
    cout<<"Max number is "<<A.findMaxElement()<<endl;
    cout<<"Min number is "<<A.findMinElement()<<endl;
    A.Sort();
    A.view();
    A.editElement(4,20);
    A.view();
    cout<<"sum is "<<A.sumofElements()<<endl;
    cout<<"Avg is "<<A.averageofElements()<<endl;

    getch();
}
