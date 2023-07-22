// append last k nodes to start of linkde list
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

void IAT(node* &head, int val)
{
    node* n = new node(val);
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

int  length(node* head)
{
    int l=0;
    node* temp=head;

    while (temp!=NULL)
    {
        temp=temp->next;
        l++;
    }
    return l;
}

node* ILKN(node* &head,int k)
{
    node* newHead;
    node* newTail;
    node* tail=head; 
    
    int l =length(head);
    int count=1;

    k=k%l;
    while (tail->next!=NULL)
    {
        if(count==l-k)
        {
            newTail=tail;
        }
        if(count==l-k+1)
        {
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    

    newTail->next=NULL;
    tail->next=head;

    return newHead;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}

int main()
{
    node *head=NULL;
    IAT(head,1);
    IAT(head,2);
    IAT(head,3);
    IAT(head,4);
    IAT(head,5);
    display(head);
    node *newhead = ILKN(head,3);
    display(newhead);

    return 0;
}


