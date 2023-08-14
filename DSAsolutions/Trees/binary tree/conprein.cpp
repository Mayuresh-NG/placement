//construct a tree from preorder and inorder
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
    
    int search(int in[],int start,int end,int curr)
    {
        for(int i=start;i<end;i++)
        {
            if(in[i]==curr)
            {
                return i;
            }
        }
    }
    //start and ed represent inorders start and end
    node* buildTree(int pre[],int in[],int start,int end)
    {   
        static int idx=0;
        if(start>end)
        {
            return NULL;
        }
        int curr = pre[idx];
        idx++;
        node* n = new node(curr);
        if(start==end)
        {
            return n;
        }
        int pos = search(in,start,end,curr);

        n->left = buildTree(pre,in,start,pos-1);
        n->right = buildTree(pre,in,pos+1,end); 
        return n;   
    }

    void inorderprint(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorderprint(root->left);
        cout<<root->data<<" ";
        inorderprint(root->right);
    }
};


int main()
{
    node s(0);
    int preorder_sequence[]={1,2,4,3,5};
    int inorder_squence[]={4,2,1,5,3};
    
    int size=sizeof(preorder_sequence)/sizeof(preorder_sequence[0]);
    node* root = s.buildTree(preorder_sequence,inorder_squence,0,size-1);
    s.inorderprint(root);
}