#include<iostream>
using namespace std;

//max nodes at level L = 2^L
//MAX nodes in a tree of height H = 2^H -1
// for n nodes , min possible height log2(n+1)
//A binary tree with L leaves has at least log2(n+1)+1 no.of levels
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

    void inorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    
    void postorder(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
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
    cout<<"preorder traversal"<<endl;s.preorder(root);
    cout<<"\ninorder traversal"<<endl;s.inorder(root);
    cout<<"\npostorder traversal"<<endl;s.postorder(root);
}
