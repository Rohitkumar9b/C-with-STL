#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    list<int>::iterator it;
    l1.push_back(10);
    l1.push_front(20);
    //l1.insert(l1.begin()+1,30)  /Random access is not allowed
    it=l1.begin();
    it++;
    l1.insert(it,30);

    l1.insert(it,{22,44,33});
    for(int x:l1)
        cout<<x<<" ";
    cout<<endl;

    it=l1.end();
    it--;
    it--;
    *it=25;
        for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<l1.front()<<endl;
    l1.pop_front();
    l1.pop_back();

    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    list<int>::iterator it1,it2;
    it1=l1.begin();
    it1++;
    it2=l1.end();
    it2--;
    l1.erase(it1,it2);

    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
