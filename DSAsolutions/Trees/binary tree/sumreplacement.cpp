//sum replacement means if tree is 1 2 3 4 5 then sum replaceed is 15 11 3 4 5
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

    void sumReplace(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        sumReplace(root->left);
        sumReplace(root->right);

        if(root->left!=NULL)
        {
            root->data+=root->left->data;
        }
        if(root->right!=NULL)
        {
            root->data+=root->right->data;
        }
    }

    void preorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
};

int main()
{
    node s(-1);
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);  
    s.preorder(root); 
    s.sumReplace(root);
    cout<<endl; 
    s.preorder(root);
}
