/*this method is based on mid point runner technique first we declare 2 pointers on head,then we move fast pointer k(node from the end) nodes forward ans then move the fast and slow pointer equally till the fast pointer reaches NULL,thats the basic idea before the question*/
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};
void insertion_at_head(node*&head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
        return;
    }
    node*n=new node(d);
    (*n).next=head;
    head=n;
}
node*taking_input()
{
    int d;
    cin>>d;
    node*head=NULL;
    while(d!=-1)
    {
        insertion_at_head(head,d);
        cin>>d;
    }
    return head;
}
void print_linked_list(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
}
ostream& operator<<(ostream&os,node*head)
{
    print_linked_list(head);
    // basically means returning  cout
    return os;
}
istream& operator>>(istream&is,node*&head)
{
    head=taking_input();
    return is;
}
node* merge(node*a,node*b)
{
    //base case
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    //rec case
    node*c;
    if(a->data <=b->data)
    {
        c=a;
        c->next=merge(a->next,b);
    }else
    if(a->data > b->data)
    {
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}
node* mid_point(node* head)
{
    if(head->next==NULL || head==NULL)
    {
        return head;
    }
    node* fast=head;
    node* slow=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
node* merge_sort(node*head)
{
    //base case
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    //rec case
    // divide into 2 parts;
    node* mid=mid_point(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;
    a=merge_sort(a);
    b=merge_sort(b);
    //merging of two sorted linked lists
    node*ans=merge(a,b);
    return ans;
}
int main ()
{
    node*head=NULL;
    cin>>head;
    cout<<head;
    cout<<endl;
    head=merge_sort(head);
    cout<<head<<endl;
    return 0;    
}