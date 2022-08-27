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
int height(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls=height(root->left);
    int rs=height(root->right);
    return 1+max(ls,rs);
}
pair optimised_diameter(node*)
{
    using pair we have to store the data of height and diameter of all nodes 
    height(max(h1,h2))+1 where h1 is height of left part and h2 is the height of right part
    diameter is calculated by max(h1+h2,max(d1,d2));d1 is diameter of left part and d2 is the diameter of right part;
    then return ans as pair
}
int main ()
{

}