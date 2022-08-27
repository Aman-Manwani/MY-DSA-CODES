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
void print_preorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    print_preorder(root->left);
    print_preorder(root->right);
}
int main ()
{
    node*root=build_tree();
    print_preorder(root);
    cout<<endl;
    return 0;
}