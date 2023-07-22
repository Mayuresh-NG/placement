#include<iostream>
using namespace std;

//floyd warshal algorithm or hare nd tortoise algo for detecting cyclle inm linked liist
class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void IAT(node *&head,int val)
{
    node *n = new node(val);
    node* temp=head;

    if(head==NULL)
    {
        head=n;
        return;
    }

    while(temp->next!=NULL)
    {

        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

bool detectcycle(node* &head)
{
    node *slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void makecycle(node* &head,int pos)
{
    node* temp=head;
    node* startnode;

    int count=1;
    while (temp->next!=NULL)
    {
        if(count==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}   

void removecycle(node *&head)
{
    node *slow=head;
    node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    
    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}

int main()
{
    node *head=NULL;
    IAT(head,1);
    IAT(head,2);
    IAT(head,3);
    IAT(head,4);
    IAT(head,5);
    IAT(head,6);

    makecycle(head,3);
    removecycle(head);
    display(head);
    cout<<detectcycle(head);


    return 0;
}