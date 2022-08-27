#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> q;
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(12);
    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }
    

    return 0;
}