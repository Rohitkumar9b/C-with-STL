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
    time operator+(time t)
    {
        time temp;
        temp.HR=HR+t.HR;
        temp.MIN=MIN+t.MIN;
        temp.SEC=SEC+t.SEC;
        return temp;
    }
    time operator-(time t)
    {
        time temp;
        if(HR>t.HR)
        {
            if(SEC>t.SEC)
                temp.SEC=SEC-t.SEC;
            else
            {
                SEC=SEC+60;
                temp.SEC=SEC-t.SEC;
                MIN=MIN-1;
            }
            if(MIN>t.MIN)
            temp.MIN=MIN-t.MIN;
            else
                {
                    MIN=MIN+60;
                    temp.MIN=MIN-t.MIN;
                    HR=HR-1;
                }
            temp.HR=HR-t.HR;
        }
        else
        {
            if(HR==t.HR)
            {
                if(MIN==t.MIN)
                {
                    if(SEC==t.SEC)
                    {
                        temp.HR=HR-t.HR;
                        temp.MIN=MIN-t.MIN;
                        temp.SEC=SEC-t.SEC;
                    }

                }
            }
            else
            {
                if(t.SEC>SEC)
                temp.SEC=t.SEC-SEC;
            else
            {
                t.SEC=t.SEC+60;
                temp.SEC=t.SEC-SEC;
                t.MIN=t.MIN-1;
            }
            if(t.MIN>MIN)
                temp.MIN=t.MIN-MIN;
            else
            {
                t.MIN=t.MIN+60;
                temp.MIN=t.MIN-MIN;
                t.HR=t.HR-1;
            }
            temp.HR=t.HR-HR;
            }
        }
        return temp;

    }
    bool operator>(time t)
    {
        if(HR>t.HR)
            return true;
        else
            if(HR==t.HR)
        {
            if(MIN>t.MIN)
                return true;
            else
            {
                if(MIN==t.MIN)
                {
                    if(SEC>t.SEC)
                        return true;
                }
            }
        }
        return false;
    }
};
int main()
{
    time t1,t2,t3,t4;
    t1.setData(20,45,50);
    t2.setData(20,45,50);

    t1.showData();
    t2.showData();
    t3=t1+t2;
    t3.showData();
    t3.Normalise();
    t3.showData();
    t4=t2-t1;
    t4.showData();
    if(t1>t2)
        cout<<endl<<"true";
    else
        cout<<endl<<"false";
    getch();
}
