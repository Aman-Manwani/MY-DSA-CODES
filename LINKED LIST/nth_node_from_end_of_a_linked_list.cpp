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
node* nth_node_from_the_end(node* &head,int k)
{
    if(head==NULL)
    {
        return head;
    }
    node* fast=head;
    node* slow=head;
    while(k--)
    {
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}
int main ()
{
    node*head=NULL;
    cin>>head;
    cout<<head;
    cout<<endl;
    node *ans=nth_node_from_the_end(head,3);
    cout<<ans->data<<endl;
    return 0;    
}