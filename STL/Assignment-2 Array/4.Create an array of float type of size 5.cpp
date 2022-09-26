#include<bits/stdc++.h>
#include<array>
using namespace std;
int main()
{
    int i;
    array<float,5> ar1;
    for(i=0;i<5;i++)
    {
        cin>>ar1[i];
    }
    array<float,5>::reverse_iterator it;
    for(it=ar1.rbegin();it<ar1.rend();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
