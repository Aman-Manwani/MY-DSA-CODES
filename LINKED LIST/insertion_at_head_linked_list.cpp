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
int main ()
{
    node*head=NULL;
    //insertion at head as specified in function name
    insertion_at_head(head,4);
    insertion_at_head(head,3);
    insertion_at_head(head,2);
    insertion_at_head(head,1);
    //print the linked list
    print_linked_list(head);
    cout<<endl;
    return 0;
}