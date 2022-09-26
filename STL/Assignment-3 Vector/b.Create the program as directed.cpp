#include<bits/stdc++.h>
#include<vector>
#include<conio.h>
using namespace std;
int main()
{
    int i=0;
    vector<int>v1;
    vector<int>::iterator it;
    v1.push_back(10);
    it=v1.begin();
    v1.insert(it,20);
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
        cout<<endl;


    cout<<"Capacity:"<<v1.capacity()<<endl;
    v1.insert(v1.begin()+1,4,30);

    cout<<"Capacity:"<<v1.capacity()<<endl;
    //int a=11,b=12,c=13;
    //v1.insert(v1.begin()+2,{a,b,c});
    //v1.insert();

    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
        cout<<endl;
    vector<int>v2;
    //vector<int>::reverse_iterator t;
    v2.insert(v2.begin(),v1.rbegin(),v1.rbegin()+5);//i.copy to ist position ii.starting position iii ending position
    //for(int x:v2)
    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    v2.erase(v2.begin()+1);
    //for(int x:v2)
    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    v1.erase(v1.begin()+3,v1.begin()+6);

    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
        cout<<endl;
}
