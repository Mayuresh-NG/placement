#include<iostream>
using namespace std;

//floyd warshal algorithm or hare nd tortoise algo for detecting cyclle inm linked liist
class node
{
    public:
    node *previous;
    int data;
    node *next;
    
    node(int val)
    {
        previous=NULL;
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{
    node *n = new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->previous=n;
    }
    head=n;
}

void InsertAtTail(node* &head,int val)
{
    node *n = new node(val);
    node *temp=head;
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->previous=temp;
}

void display(node *head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(node* &head)
{
    node *todelete=head;
    head=head->next;
    head->previous=NULL;

    delete todelete;
}

void deletenode(node* &head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp=head;
    int count=1;

    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    
    temp->previous->next=temp->next;
    if(temp->next!=NULL)
    {
      temp->next->previous=temp->previous;  
    }

    delete temp;
}

int main()
{
    node *head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);

    insertAtHead(head,6);
    deletenode(head,4);
    deletenode(head,1);
    display(head);


    return 0;
}