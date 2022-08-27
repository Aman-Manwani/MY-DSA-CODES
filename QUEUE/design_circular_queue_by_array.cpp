#include<bits/stdc++.h>
using namespace std;
class circular_queue
{
    int *arr;
    int ms,cs,f,r;
    public:
    circular_queue(int ds=5)
    {
        arr=new int [ds];
        cs=0;
        ms=ds;
        f=0;
        r=ds-1;
    }
    bool full()
    {
        return cs==ms;
    }
    bool empty()
    {
        if(cs==0)
        {
            return true;
        }
        return false;
    }
    void push(int data)
    {
        if(!full())
        {
            r=(r+1)%ms;
            arr[r]=data;
            cs++;
        }
    }
    void pop()
    {
        if(!empty())
        {
            f=(f+1)%ms;
            cs--;
        }
    }
    int front()
    {
        return arr[f];
    }
};
int main ()
{
    circular_queue q;
    for(int i=1;i<=6;i++)
    {
        q.push(i);
    }

    q.pop();
    q.pop();

    q.push(7);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}