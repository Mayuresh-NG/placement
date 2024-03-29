//sum of all the nodes in a biary tree
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

    int sum=0;
    int height(node* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lheight = height(root->left);
        int rheight = height(root->right);
        return max(lheight,rheight)+1;
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
    cout<<s.height(root); 
}

