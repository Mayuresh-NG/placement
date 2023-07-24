//Merge two sorted linked list
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
    node* n= new node(val);
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
    cout<<"NULL"<<endl;
}

node* merge(node* &head1,node* &head2)
{
    node* dummynode=new node(-1);//node of merging two link list
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummynode;

    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->data<ptr2->data)
        {
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        else
        {
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        ptr3=ptr3->next;
    }

    while(ptr1!=NULL)
    {
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }

    while(ptr2!=NULL)
    {
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummynode->next;
}

//with recursion
node* mergewithrecursion(node* &head1,node* &head2)
{
    node* result;
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }

    if(head1->data<head2->data)
    {
        result=head1;
        result->next=mergewithrecursion(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergewithrecursion(head1,head2->next);
    }
    return result;
}

int main()
{
    node *head1=NULL;
    node *head2=NULL;
    IFT(head1,1);
    IFT(head1,4);
    IFT(head1,5);
    IFT(head1,7);
    
    display(head1);

    IFT(head2,2);
    IFT(head2,3);
    IFT(head2,6);
    
    display(head2);
    //node* newll = merge(head1,head2);
    node* newllrec = mergewithrecursion(head1,head2);
    //display(newll);
    display(newllrec);
    return 0;
}