#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee
{
private:
    int empid;
    char name[20];
    float salary;
public:
    void setEmployeeId(int id)
    {
        empid=id;
    }
    void setEmployeeName(char n[])
    {
        strcpy(name,n);
    }
    void setEmployeesalary(float s)
    {
        salary=s;
    }
    void showEmployee()
    {
        cout<<"Employee id is "<<empid<<"\nEmployee Name is "<<name<<"\nEmployee's salary is "<<salary<<endl;
    }
    float getsalary()
    {
        return salary;
    }
    char* getName()
    {
        return name;
    }
    int getempid()
    {
        return empid;
    }
};
void displayEmployees(Employee [],int);
void sortEmployeesBySalary(Employee [],int);
void setEmployees(Employee [],int);
int main()
{
    Employee e[10];
    setEmployees(e,10);
    displayEmployees(e,10);






    /*Employee e1;
    e1.setEmployeeId(101);
    e1.setEmployeeName("Abhinav");
    e1.setEmployeesalary(50000);
    e1.showEmployee();
    cout<<"Id is "<<e1.getempid()<<endl;
    cout<<"Salary is "<<e1.getsalary()<<endl;
    cout<<"Name is "<<e1.getName()<<endl; */
    getch();
}
void sortEmployeesBySalary(Employee E[],int n)
    {
        int i,j;
        float temp,m,n;
        for(i=0;i<n;i++)
            for(j=0;j<n-1-i;j++)
            {
                m=E[i].getsalary;
                n=E[i+1].getsalary;
                if(m>n)
                {
                    temp=m;
                    m=n;
                    n=temp;
                    E[i+1].getsalary=n;
                    E[i].getsalary()=m;
                }
            }

    }
    void sortEmployeesByEmpid(Employee E[],int n);
    {

    }
    void displayEmployees(Employee E[],int n)
    {
        int i;
        for(i=0;i<n;i++)
            cout<<E[i].getempid()<<" "<<E[i].getName()<<" "<<E[i].getsalary()<<endl;
    }
    void setEmployees(Employee e[],int n)
    {
        int i,x;
        char y[20];
        float z;
        for(i=0;i<n;i++)
        {
            cin>>x>>y>>z;
            e[i].setEmployeeId(x);
            e[i].setEmployeeName(y);
            e[i].setEmployeesalary(z);
        }
    }

