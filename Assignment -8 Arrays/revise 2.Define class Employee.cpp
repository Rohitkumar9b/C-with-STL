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
int main()
{
    Employee e1;
    e1.setEmployeeId(101);
    e1.setEmployeeName("Abhinav");
    e1.setEmployeesalary(50000);
    e1.showEmployee();
    cout<<"Id is "<<e1.getempid()<<endl;
    cout<<"Salary is "<<e1.getsalary()<<endl;
    cout<<"Name is "<<e1.getName()<<endl;
    getch();
}
