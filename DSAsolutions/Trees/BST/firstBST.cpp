//build BST from an array
#include<iostream>
using namespace std;

//BST INORDER IS ALWAYS SORTED(IMP POINT)
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
};

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

node* insertBST(node* root,int val)
{
    if(root==NULL)
    {
        return new node(val);
    }
    if(val<root->data)
    {
        root->left = insertBST(root->left,val);
    }
    else if(val>root->data)
    {
        root->right = insertBST(root->right,val);
    }
    return root;
}

int main()
{
    node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inorder(root);  
}