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
void print_linked_list(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
}
int length(node*head)
{
    int count=0;
    while(head!=NULL)
    {
        count++;
        head=head->next;
    }
    return count;
}
void insertion_at_tail(node*&head,int d)
{
    if(head==NULL)
    {
        head=new node(d);
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node(d);
    return;
}
void insertion_at_middle(node*&head,int d,int p)
{
    //if linked list is empty
    if(head==NULL)
    {
        head=new node(d);
        return;
    }else
    //if ques wants to put data on tail of linked list
    if(p>length(head))
    {
        insertion_at_tail(head,d);
    }
    // to put in middle of linked list
    else
    {
        int jump=1;
        node*temp=head;
        while(jump<=p-1)
        {
            temp=temp->next;
            jump++;
        }
        node*n=new node(d);
        n->next=temp->next;
        temp->next=n;
    }
}
void deletion_at_head(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*temp=head->next;
    delete head;
    head=temp;
}
void deletion_at_tail(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*tail=head;
    while(tail!=NULL)
    {
        tail=tail->next;
    }
    node*prev=head;
    int posi=1;
    while(posi<length(head)-1)
    {
        prev=prev->next;
        posi++;
    }
    delete tail;
    prev->next=NULL;
}
void deletion_at_middle(node*&head,int p)
{
    if(head==NULL)
    {
        return;
    }
    int jump=1;
    node*temp=head;
    while(jump<p)
    {
        temp=temp->next;
        jump++;
    }
    node*prev=head;
    int jumps=1;
    while(jumps<p-1)
    {
        prev=prev->next;
        jumps++;
    }
    prev->next=temp->next;
    delete temp;
}
bool search(node*head,int key)
{
    if(head==NULL)
    {
        return false;
    }
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
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
    //insertion at head as specified in function name
    insertion_at_head(head,4);
    insertion_at_head(head,2);
    insertion_at_head(head,1);
    //insertion at position p of linked list
    insertion_at_middle(head,3,2);
    // insertion at tail
    insertion_at_tail(head,5);
    //deletetion at middle
    deletion_at_middle(head,3);
    // deletion at head
    deletion_at_head(head);
    // deletion at tail
    deletion_at_tail(head);
    //searching of linked list
    if(search(head,2))
    {
        cout<<"key found"<<endl;
    }else
        cout<<"key not found"<<endl;
    //print the linked list
    print_linked_list(head);
    cout<<endl;
    //revese the linked list
    reverse(head);
    print_linked_list(head);
    cout<<endl;
    return 0;
}                   