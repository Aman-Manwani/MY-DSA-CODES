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
void reverse(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*prev=NULL;
    node*current=head;
    node*forward;
    while(current!=NULL)
    {
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
    head=prev;
}
int main ()
{
    node*head=NULL;
    cin>>head;
    cout<<head;
    cout<<endl;
    reverse(head);
    cout<<head;
    cout<<endl;
    return 0;    
}