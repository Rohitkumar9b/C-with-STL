#include<iostream>
#include<conio.h>
using namespace std;
class time
{
private:
    int h,m,s;
public:
    void settime(int hr,int minute,int sec)
    {
        h=hr;
        m=minute;
        s=sec;
    }
    void normalise()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
    void showTime()
    {
        normalise();
        cout<<h<<"hr "<<m<<"sec "<<s<<"sec "<<endl;
    }
};
int main()
{
    time t1;
    t1.settime(10,524,145);
    t1.showTime();
    getch();
}
