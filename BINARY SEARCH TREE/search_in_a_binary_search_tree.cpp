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
bool search(node*root,int key)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==key)
    {
        return true;;
    }
    if(key<=root->data)
    {
        return search(root->left,key);
    }else
    {
        search(root->right,key);
    }
}
int main () 
{
    node*root=build();
    inorder_print(root);
    cout<<endl;
    bfs(root);
    int key;
    cin>>key;
    if(search(root,key))
    {
        cout<<"Present"<<endl;
    }else
        cout<<"node value not found"<<endl;
    return 0;
}