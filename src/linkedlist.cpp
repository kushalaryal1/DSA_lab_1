#include "Linkedlist.h"
#include<iostream>
using namespace std;
bool Linkedlist::isEmpty()
{
    if(HEAD=NULL)
    return 1;
    else 
    return 0;

}

void Linkedlist::addToHead(int data)
{
    node *newNode=new node();
    newNode->info=data;
    newNode->next=HEAD;
    HEAD=newNode;
    cout<<data<<" Added To HEAD"<<endl;
    if(TAIL==NULL)
    TAIL=HEAD; 
}
void Linkedlist :: addToTail(int data){
    node *newNode=new node();
    newNode->info=data;
    newNode->next=NULL;
    if(TAIL==NULL)
    {
        TAIL=newNode;
        HEAD=newNode;
    }
    else
    {
        TAIL->next=newNode;
        TAIL=newNode;
    }
    cout<<data<<" Added To Tail"<<endl;
}
void Linkedlist :: add(int data,node* pred)
{
    if(HEAD==NULL)
    addToHead(data);
    else
    {
        node *newNode=new node();
        newNode->info=data;
        newNode->next=pred->next;
        pred->next=newNode;
        cout<<data<<"Adde To The List After"<<pred->info<<endl;
    }
}
void Linkedlist :: removefromHead()
{
    if(HEAD==NULL)
    cout<<"EMPTY LIST"<<endl;
    else
    {
        node *toRemove=HEAD;
        int temp=toRemove->info;
        HEAD=HEAD->next;
        delete toRemove;
        cout<<temp<<" Remove From The List"<<endl;
        if(HEAD==NULL)
        TAIL=NULL;
    }
}
void Linkedlist :: remove(int data)
{
    if(HEAD==NULL)
    cout<<"EMPTY LIST"<<endl;
    else if(HEAD->info==data)
    removefromHead();
    else
    {
        node *prev=HEAD;
        node *temp=HEAD->next;
        while(temp!=NULL)
        {
            prev->next=temp->next;
            int temporary=temp->info;
            delete temp;
            cout<<temporary<<" Removed "<<endl;
            if(prev->next==NULL)
            TAIL=prev;
        }
    }

}
node* Linkedlist :: retrieve(int data)
{
    node *retri=new node(HEAD);
    while(1)
    {
        if(retri==NULL || retri->info==data)
        break;
        retri=retri->next;
    }
    if(retri==NULL)
    {
        cout<<data<<" Couldn't Be Retrived"<<endl;
        return NULL;
    }    
    else
    {
        cout<<data<<" Retrived"<<endl;
        return retri;
    }

}

bool Linkedlist :: search(int data)
{
    node *sea;
    sea=HEAD;
    while(1)
    {
        if(sea==NULL || sea->info==data)
        break;
        sea=sea->next;
    }
    if(sea==NULL)
    return false;
    else 
    return true;
}
void Linkedlist :: traverse()
{
    node *tra=HEAD;
    cout<<"List :";
    while(tra!=NULL)
    {
        cout<<tra->info<<" ";
        tra=tra->next;
    
    }
    cout<<endl;
}
node* Linkedlist :: returnHead()
{
    return HEAD;
}