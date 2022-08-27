// in this type of linked lists,we have two pointer ,one to go forward same as singly linked list and other pointing to previous node in linked list 
#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};
void insert_at_head(node *&head,int key)
{
    if(head==NULL)
    {
        head=new node(key);
        return;
    }
    node*temp=new node(key);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insert_at_tail(node*&head,int key)
{
    if(head==NULL)
    {
        head=new node(key);
        return;
    }
    node*temp=new node(key);
    node*dup=head;
    while(dup->next!=NULL)
    {
        dup=dup->next; 
    }
    dup->next=temp;
    temp->prev=dup;
}
void print(node*head)
{
    if(head==NULL)
    {
        return;
    }
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
}
int main ()
{
    node*head=NULL;
    insert_at_head(head,3);
    insert_at_head(head,4);
    insert_at_head(head,5);
    insert_at_head(head,6);
    insert_at_head(head,7);
    insert_at_tail(head,9);
    print(head);
    cout<<endl;
    return 0;
}