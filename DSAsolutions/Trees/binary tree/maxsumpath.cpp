//Maximum path sum
#include<bits/stdc++.h>
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
};

int MPSU(node *root,int &ans)
{
    if(root==NULL)return 0;

    int l = MPSU(root->left,ans);
    int r= MPSU(root->right,ans);

    int nodeMax =max(max(root->data,root->data+l+r),
                    max(root->data+l,root->data+r));

    ans=max(ans,nodeMax);

    int singlepathsum=max(root->data,max(root->data+l,root->data+r));
    return singlepathsum;
}

int maxPathSum(node *root)
{
    int ans=INT_MIN;
    MPSU(root,ans);
    return ans;
}

int main()
{
    node n(-1);
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->right = new node(5);

    cout<<maxPathSum(root);
}