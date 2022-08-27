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
node* build_tree()
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
int count_nodes(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+count_nodes(root->left)+count_nodes(root->right);
}
int sum_of_nodes(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    return root->data+sum_of_nodes(root->left)+sum_of_nodes(root->right);
}
int main ()
{
    node*root=build_tree();
    cout<<count_nodes(root)<<endl;
    cout<<sum_of_nodes(root)<<endl;
    return 0;
}