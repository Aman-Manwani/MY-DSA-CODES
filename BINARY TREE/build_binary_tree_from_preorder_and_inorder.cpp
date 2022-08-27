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
int i=0;
node*ans(int *arr,int *in,int s,int e,int n)
{
    if(i==n || s>e)
    {
        return NULL;
    }
    node*root=new node(pre[i]);
    int index=-1;
    for(int j=s;s>=e;j++)
    {
        if(in[j]==pre[i])
        {
            index=j;
            break;
        }
    }
    root->left=ans(pre,in,s,index-1,n);
    root->right=ans(pre,in,index+1,e,n);
    return root;
}
int main ()
{
    int pre[]={};
    int in[]={};
    int n=sizeof(pre)/sizeof(int);
    int s=0;
    int e=n-1;
    ans(pre,in,s,e,n);
}