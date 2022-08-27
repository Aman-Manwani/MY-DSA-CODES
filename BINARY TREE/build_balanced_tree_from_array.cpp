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
void level_order_traversal_2(node*root)
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
node* build_tree_from_array(int *arr,int s,int e)
{
    //base case
    if(s>e)
    {
        return NULL;
    }
    //rec case 
    int mid=(s+e)/2;
    node*root=new node(arr[mid]);
    root->left=build_tree_from_array(arr,s,mid-1);
    root->right=build_tree_from_array(arr,mid+1,e);
    return root;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(int);
    node*root=build_tree_from_array(arr,0,n);
    level_order_traversal_2(root);
    return 0;
} 