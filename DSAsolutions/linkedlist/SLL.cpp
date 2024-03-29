#include<iostream>
using namespace std;

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

void insertAtHead(node* &head,int val)
{
    node *n= new node(val);

    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val)
{
    node *n = new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }

    node *temp=head;
    while (temp->next!=NULL)
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

bool search(node *head,int key)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deletAtHead(node* &head)
{
    node* todelete = head;
    head=head->next;
    delete todelete;
}
void deletenode(node* &head,int key)
{
    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL)
    {
        deletAtHead(head);
        return;
    }

    node *temp=head;
    while(temp->next->data!=key)
    {
        temp=temp->next;
    }
    node *todelete = temp->next;
    temp->next=temp->next->next;

    delete todelete;
}   

int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,0);
    display(head);
    deletenode(head,2);
    deletAtHead(head);
    display(head);
    cout<<search(head,2)<<endl;
    return 0;
}