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
node* insert_in_bst(node*root,int d)
{
    if(root==NULL)
    {
        return new node(d);
    }
    if(root->data>=d)
    {
        root->left=insert_in_bst(root->left,d);
    }else
        root->right=insert_in_bst(root->right,d);
    return root;
}
void inorder_print(node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder_print(root->left);
    cout<<root->data<<" ";
    inorder_print(root->right);
}
node*build()
{
    int d;
    cin>>d;
    node*root=NULL;
    while(d!=-1)
    {
        root=insert_in_bst(root,d);
        cin>>d;
    }
    return root;
}
void bfs(node*root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*f=q.front();
        q.pop();
        if(f==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }else
        {
            cout<<f->data<<" ";
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);
            }
        }
    }    
}
bool isValid(node*root,int mini,int maxi)
{
    if(root==NULL)
    {
        return true;
    }
    if(root->data>=mini && root->data<=maxi && isValid(root->left,mini,root->data) && isValid(root->right,root->data,maxi))
    {
        return true;
    }
    return false;
}
int main ()
{
    node*root=build();
    bfs(root);
    cout<<endl;
    if(isValid(root,INT_MIN,INT_MAX))
    {
        cout<<"yes"<<endl;
    }else
        cout<<"not a BST "<<endl;
    return 0;
}