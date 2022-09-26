#include<iostream>
using namespace std;
class Account
{
private:
    int account_no;
    double balance;
    static float rate_of_interest;
public:
    void setbalance(double b)
    {
        balance=b;
    }
    void setaccountno(int a)
    {
        account_no=a;
    }
    int getaccountno()
    {
        return account_no;
    }
    double getbalance()
    {
        return balance;
    }
    void Account::setrateof_interest()
    {

    }
    float getrateofInterest()
    {

    }


};
