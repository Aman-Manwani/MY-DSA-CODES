#include<bits/stdc++.h>
using namespace std;
int main ()
{
    stack<int>s;
    for(int i=1;i<8;i++)
    {
        s.push(i);
    }
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}