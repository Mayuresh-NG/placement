#include<iostream>
using namespace std;
//reverse linked list
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

//using iterative method
node* reverse(node* &head)
{ 
    node *prev=NULL;
    node *current=head;
    node *nextptr;

    while(current!=NULL)
    {
        nextptr=current->next;
        current->next=prev;

        prev=current;
        current=nextptr;
    }
    return prev;
}

//using recursicve method
node* revrec(node *head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }

    node* newhead=revrec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
    
}

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

void display(node *head)
{
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head=NULL;
    IFT(head,1);
    IFT(head,2);
    IFT(head,3);
    IFT(head,4);
    IFT(head,5);

    node *newhead = revrec(head);
    display(newhead);
}