#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>vec;
    vector<int>v1={1,2};
    vector<int>v2={3,4,5};
    vector<int>v3={6,5,4,9};
    vec.push_back(v1);
    vec.insert(vec.end(),{v2,v3});
    vector<vector<int>>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        for(auto x:*it)
            cout<<x<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
