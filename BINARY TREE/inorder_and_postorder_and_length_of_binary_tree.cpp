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
void print_inorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    print_inorder(root->left);
    cout<<root->data<<" ";
    print_inorder(root->right);
}
int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return max(ls,rs)+1;
}
void print_postorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    print_postorder(root->left);
    print_postorder(root->right);
    cout<<root->data<<" ";
}
int main ()
{
    node*root=build_tree();
    print_inorder(root);
    cout<<endl;
    print_postorder(root);
    cout<<endl;
    cout<<height(root);
    cout<<endl;
    return 0;    
}