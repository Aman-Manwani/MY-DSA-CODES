#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*left;
    node*right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};
node*build_tree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node*root=new node(d);
    root->left=build_tree();
    root->right=build_tree();
    return root;
}
int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return 1+max(ls,rs);
}
void level_order_recursive(node*root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
    }
    level_order_recursive(root->left,k-1);
    level_order_recursive(root->right,k-1);
    return;
}
void ans(node*root)
{
    for(int i=1;i<=height(root);i++)
    {
        level_order_recursive(root,i);
        cout<<endl;
    }
}
int main ()
{
    node*root=build_tree();
    ans(root);
    return 0;
}