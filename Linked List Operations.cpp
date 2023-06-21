

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void insertBeg(node* &head,int data)
{
    node* n=new node(data);
    n->next=head;
    head=n;
}
void insertEnd(node* &head,int data)
{
    if(head==NULL)
    {
        insertBeg(head,data);
    }
    
    node* temp=head;
    node* n=new node(data);
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=NULL;
    
}
void printList(node* &head)
{
    node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deleteBeg(node* &head,int data)
{
    node* todelete=head;
    head=head->next;
    
    delete todelete;
}
void deleteNode(node* &head,int data)
{
    if(head==NULL)
    {
        return;
    }
    
    if(head->next==NULL)
    {
        deleteBeg(head,data);
        return;
    }
    
    node* temp=head;
    while(temp->next->data != data)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    
    delete todelete;
}
int main()
{
    node* head=NULL;
    insertBeg(head,3);
    insertBeg(head,2);
    insertEnd(head,4);
    insertEnd(head,5);
    deleteNode(head,5);
    printList(head);

    return 0;
}
