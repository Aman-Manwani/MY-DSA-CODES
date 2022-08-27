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
int ans(node*root,int &maxi)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=max(0,ans(root->left,maxi));
    int right=max(0,ans(root->right,maxi));
    maxi=max(maxi,root->data+left+right);
    return root->data+max(left,right);
}
int main ()
{
    node*root=build_tree();
    int maxi=INT_MIN;
    cout<<ans(root,maxi)<<endl;
    return 0;
}