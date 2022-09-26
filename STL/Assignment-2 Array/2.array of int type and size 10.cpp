#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    int i;
    array<int,10> a;
    for(i=0;i<10;i++)
        cin>>a[i];
    array<int,10>::iterator it;
    for(it=a.begin();it<a.end();it++)
        {
            if(*it%2!=0)
            cout<<*it<<" ";
        }
    cout<<endl;
    return 0;
}

