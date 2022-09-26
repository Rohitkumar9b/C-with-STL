#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
private:
    int account_no;
    float balance;

public:
    static float rate_of_interest;
    void setBalance(float x)
    {
        balance=x;
    }
    void setAccountNo(int y)
    {
        account_no=y;
    }
    float getBalance()
    {
        return balance;
    }
    int getAccountNo()
    {
        return account_no;
    }
    static void setRateOfInterest(float k)
    {
        rate_of_interest=k;
    }
    static float getRateOfInterest()
    {
        return rate_of_interest;
    }
    float calculate_Rate(int t)
    {
        return (balance*t*rate_of_interest)/100.0;
    }
};
float Account::rate_of_interest;
int main()
{
    Account a1,a2;
    a1.setAccountNo(100);
    a1.setBalance(10245.5);
    Account::rate_of_interest=4.5;
    cout<<"Rate is "<<Account::rate_of_interest;
    cout<<"\nAccount no is "<<a1.getAccountNo();
    cout<<"\nBalance is "<<a1.getBalance();
    cout<<endl<<"interest is b"<<a1.calculate_Rate(2);
    getch();
}
