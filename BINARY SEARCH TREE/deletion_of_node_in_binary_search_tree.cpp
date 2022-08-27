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
node* delete_node(node*root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(key<root->data)
    {
        root->left=delete_node(root->left,key);
        return root;
    }
    if(key==root->data)
    {
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }
        if(root->left==NULL && root->right!=NULL)
        {
            node*temp=root->right;
            delete root;
            return temp;
        }
        if(root->right==NULL && root->left!=NULL)
        {
            node*temp=root->left;
            delete root;
            return temp;
        }
        if(root->left!=NULL && root->right!=NULL)
        {
            node*replace=root->right;
            while(replace->left!=NULL)
            {
                replace=replace->left;
            }
            root->data=replace->data;
            delete_node(root->right,replace->data);           
        }



    }
    if(key>root->data)
    {
        root->right=delete_node(root->right,key);
        return root;
    }
}
int main ()
{
    node*root=build();
    inorder_print(root);
    cout<<endl;
    bfs(root);
    cout<<endl;
    int k;
    cin>>k;
    delete_node(root,k);
    bfs(root);
    cout<<endl;
    return 0;
}