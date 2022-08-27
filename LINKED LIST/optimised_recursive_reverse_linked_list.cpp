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
node * recursive_reverse(node*head)
{
    //base case
    if(head->next==NULL || head==NULL)
    {
        return head;
    }
    // rec case
    node *shead=recursive_reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return shead;
}    
int main ()
{
    node*head=NULL;
    cin>>head;
    cout<<head;
    cout<<endl;
    head=recursive_reverse(head);
    cout<<head;
    cout<<endl;
    return 0;    
}