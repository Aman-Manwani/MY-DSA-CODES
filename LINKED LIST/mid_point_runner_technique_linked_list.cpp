// in this technique if we want to find mid point of a linked list then we can use this type of approach, we can also use the approach in which we calculat the length of a linked list and get the mid point by dividing it with 2, mid point runner technique is also the same we take two pointers on head and one point moves two steps and other moves one step ,so at last back pointer comes on mid point 
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
node* mid_point(node* &head)
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
int main ()
{
    node*head=NULL;
    cin>>head;
    cout<<head;
    cout<<endl;
    node *ans=mid_point(head);
    cout<<ans->data<<endl;
    return 0;    
}