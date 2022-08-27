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
node* lca(node*root,int a,int b)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==a || root->data==b)
    {
        return root;
    }
    node* left_ans=lca(root->left,a,b);
    node* right_ans=lca(root->right,a,b);
    if(left_ans!=NULL &&right_ans!=NULL)
    {
        return root;
    }
    if(left_ans!=NULL)
    {
        return left_ans;
    }else
    return right_ans;
}
int main ()
{
    node*root=build_tree();
    int a,b;
    cin>>a>>b;
    node*temp=lca(root,a,b);
    cout<<temp->data<<endl;
    return 0;
}