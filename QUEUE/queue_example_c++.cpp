#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>s;
    s.push(45);
    s.push(47);
    s.push(55);
    s.push(65);
    s.push(85);
    s.push(125);
    s.push(875);
    s.push(925);
    s.push(05);
    while(!s.empty())
    {
        cout<<s.front()<<endl;
        s.pop();
    }
    return 0;
}
