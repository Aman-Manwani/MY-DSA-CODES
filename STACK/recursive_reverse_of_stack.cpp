#include<bits/stdc++.h>
using namespace std;
void insert_at_bottom(stack<int>&s,int data)
{
    if(s.empty())
    {
        s.push(data);
        return;
    }
    int x=s.top();
    s.pop();
    insert_at_bottom(s,data);
    s.push(x);
}
void recursive_reverse(stack<int>&s)
{
    if(s.empty())
    {
        return;
    }
    int data=s.top();
    s.pop();
    recursive_reverse(s);
    insert_at_bottom(s,data);
}
int main ()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    recursive_reverse(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}