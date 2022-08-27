#include<bits/stdc++.h>
using namespace std;
int main ()
{
    queue<int>q;
    for(int i=0;i<6;i++)
    {
        q.push(i);
    }

    q.pop();
    q.pop();

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}