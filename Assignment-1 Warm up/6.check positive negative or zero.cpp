#include<iostream>
#include<conio.h>
using namespace std;
main()
{
  int n;
  cout<<"Enter a number";
  cin>>n;
  if(n>0)
        cout<<"Positive number";
  else
    if(n==0)
    cout<<"zero";
  else
    cout<<"Negative number";
  getch();
}
