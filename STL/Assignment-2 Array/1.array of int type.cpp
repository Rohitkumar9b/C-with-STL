#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    int k=5;
    array<int,5> ar1={4,5,4,85,75};
    for(int i=0;i<5;i++)
        cout<<ar1[i]<<" ";
    cout<<endl;
    array<int,5>::iterator it;
    for(it=ar1.begin();it<ar1.end();it++)
        cout<<*it<<" ";
        cout<<endl;
    array<int,5>::reverse_iterator t;
    for(t=ar1.rbegin();t<ar1.rend();t++)
        cout<<*t<<" ";
        cout<<endl;
    for(it=ar1.begin();it<ar1.end();it++)
        {
            *it=*it+k;
            cout<<*it<<" ";
        }
        cout<<endl;
    return 0;
}
