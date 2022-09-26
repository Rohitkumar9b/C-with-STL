#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int>l1;
    l1.push_front(10);
    l1.emplace_front(20);
    forward_list<int>::iterator it=l1.begin();
    l1.emplace_after(it,30);

    l1.insert_after(++it,22);

    int length=0;
    for(it=l1.begin();it!=l1.end();it++,length++);
    cout<<"size is "<<length<<endl;
    for(int x:l1)
        cout<<x<<" ";
    cout<<endl;

    int i=1;
    for(it=l1.begin();it!=l1.end()&&i<length;i++,it++);
    l1.emplace_after(it,35);

    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    for(length=0,it=l1.begin();it!=l1.end();it++,length++);
    for(i=1,it=l1.begin();it!=l1.end()&&i<length;i++,it++);
        *it=75;

    cout<<l1.front()<<endl;

    l1.pop_front();

    l1.erase_after(l1.begin(),l1.end());

    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    l1={20,40,60,80,100,120};

    l1.erase_after(l1.begin());

    l1.remove(100);
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    l1.reverse();

    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    return 0;


}
