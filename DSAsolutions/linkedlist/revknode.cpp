//reverse k node in linked list
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void IFT(node* &head,int val)
{
    node *n=new node(val);
    
    if(head==NULL)
    {
        head=n;
        return;
    }

    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

node *reversek(node* &head,int k)
{
    node *prev=NULL;
    node *current=head;
    node *nextptr;

    int count=0;
    while(current!=NULL && count<k)
    {
        nextptr=current->next;
        current->next=prev;
        prev=current;
        current=nextptr;
        count++;
    }

    if(nextptr!=NULL)
    {
        head->next = reversek(nextptr,k);
    }
    return prev;
    
}

void dispaly(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main()
{
    node* head=NULL;
    IFT(head,1);
    IFT(head,2);
    IFT(head,3);
    IFT(head,4);
    IFT(head,5);
    IFT(head,6);

    dispaly(head);
    int k=2;
    node *newhead=reversek(head,k);
    cout<<endl;
    dispaly(newhead);
    return 0;
}