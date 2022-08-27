#include<bits/stdc++.h>
using namespace std;
class queue1
{
    list<int>l;
    public:
    
    void push(int value)
    {
        l.push_back(value);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int rear()
    {
        return l.back();
    }
    bool empty()
    {
        if(l.size()==0)
        {
            return true;
        }
        return false;
    }
};
int main ()
{
    queue1 q;
    for(int i=1;i<5;i++)
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
    cout<<endl;
    return 0;
}