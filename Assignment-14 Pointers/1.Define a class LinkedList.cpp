#include<iostream>
#include<conio.h>
using namespace std;
class LinkedList
{
private:
    struct node{
     int item;
     int *next;
    };
    node *start;
public:
~LinkedList()
{
    start=NULL;
}
void addItemAtStart(int data)
{
    node *n=new node;
    n->item=data;
    n->next=start;
    start=n;
}
void addItemAtLast(int data)
{
    node *n,*t;
    n=new node;
    n->item=data;
    if(start==NULL)
    {
        n->next=start;
        start=n;
    }
    else
    {
       t=start;
       while(t->next==NULL)
           t=t->next;
        n->next=t->next;
        t->next=n;
    }
}
void deleteFirstitem()
{
    node *t;
    if(start==NULL)
        cout<<"Underflow";
    else
    {
        t=start;
        start=t->next;
        delete t;
    }
}
void deleteLastitem()
{

}
};
