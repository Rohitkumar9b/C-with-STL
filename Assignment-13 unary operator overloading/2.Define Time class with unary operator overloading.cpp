#include<iostream>
#include<conio.h>
using namespace std;
class time
{
private:
    int HR;
    int MIN;
    int SEC;
public:
    void setData(int a,int b,int c)
    {
        HR=a;
        MIN=b;
        SEC=c;
    }
    void showData()
    {
        cout<<endl<<HR<<" : "<<MIN<<" : "<<SEC;
    }
    void Normalise()
    {
        MIN=MIN+SEC/60;
        SEC=SEC%60;
        HR=HR+MIN/60;
        MIN=MIN%60;
    }
    time operator!()
    {
        time t;
        if(HR!=0)
            {
                t.HR=0;
            t.MIN=0;
            t.SEC=0;
            }
        else
            {
                t.HR=1;
            t.MIN=0;
            t.SEC=0;
            }
            return t;
    }
};
int main()
{
    time t1,t2,t3,t4;
    t1.setData(20,45,50);
    t2.setData(20,45,50);
    t3=!t2;
    t1.showData();
    t2.showData();
    t3.showData();
    t4=!t3;
    t4.showData();
    getch();
}
