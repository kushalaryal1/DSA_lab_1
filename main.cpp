#include<iostream>
using namespace std;
#include "Linkedlist.h"

int main(int argument_c,char* argument_v[])
{
    Linkedlist List;
    node *newNode=new node();
    List.isEmpty();
    List.addToHead(4);
    List.traverse();
    List.addToTail(7);
    List.traverse();
    newNode=List.retrieve(7);
    cout<<"Retrived Value"<<newNode->info<<endl;
    List.add(5,newNode);
    List.traverse();
    List.removefromHead();
    List.traverse();
    List.remove(7);

    int var=5;
    if(List.search(var))
    cout<<var<<" Exists In The List"<<endl;
    else
    cout<<"Doesn't Exist"<<endl;
    return 0;
}