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
pair<int,int> isbalanced(node*root)
{
    pair<int,bool>p;
    if(root==NULL)
    {
        return {0,1};
    }
    auto a=isbalanced(root->left);
    auto b=isbalanced(root->right);
    p.first=1+max(a.first,b.first);
    if(abs(a.first-b.first)<=1 && a.second==1 && b.second==1)
    {
        p.second=1;
        return p;
    }else
    p.second=0;
    return p;
}
int main ()
{
    node*root=build_tree();
    if(isbalanced(root).second==1)
    {
        cout<<"balanced"<<endl;
    }else
    cout<<"not a balanced tree"<<endl;
    return 0;
}