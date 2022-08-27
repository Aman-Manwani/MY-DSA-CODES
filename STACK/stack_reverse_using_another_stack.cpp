#include<bits/stdc++.h>
using namespace std;
void transfer_members(stack<int>&s1,stack<int>&s2,int n)
{
    for(int i=0;i<n;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}
void reverse_stack(stack<int>&s1)
{
    stack<int>s2;
    int n=s1.size();
    for(int i=0;i<n;i++)
    {
        int x=s1.top();
        s1.pop();

        //transfer the remaining members from stack s1 to s2
        transfer_members(s1,s2,n-i-1);

        //copy x in the original stack
        s1.push(x);

        //again transfer the s2 elements to s1
        transfer_members(s2,s1,n-i-1);
    }
}
int main ()
{
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);
    reverse_stack(s1);
    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    return 0;
}