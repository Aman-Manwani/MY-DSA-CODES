// this technique is to reverse the stack in the same stack so we move our original stack to other stack say temp1 and then again move temp1 to another stack say temp2 and then again move it to the original stack so you are able to seen that the original stack will be reversed 
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int>s;
    stack<int>temp1;
    stack<int>temp2;
    for(int i=1;i<6;i++)
    {
        s.push(i);
    }
    for(int i=1;i<6;i++)
    {
        temp1.push(s.top());
        s.pop();
    }
    for(int i=1;i<6;i++)
    {
        temp2.push(temp1.top());
        temp1.pop();
    }
    for(int i=1;i<6;i++)
    {
        s.push(temp2.top());
        temp2.pop();
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}
