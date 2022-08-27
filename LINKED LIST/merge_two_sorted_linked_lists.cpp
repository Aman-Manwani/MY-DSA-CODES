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
int main ()
{
    node*head=NULL;
    node*head2=NULL;
    cin>>head>>head2;
    cout<<head;
    cout<<endl;
    cout<<head2;
    cout<<endl;
    node*ans=merge(head,head2);
    cout<<ans<<endl;
    return 0;    
}