#include<bits/stdc++.h>
using namespace std;
class sstack
{
    private:
    vector<int>v;
    public:
    void insert(int data)
    {
        v.push_back(data);
    }
    bool empty()
    {
        if(v.size()==0)
        {
            return true;
        }
        return false;
    }
    void pop()
    {
        if(!empty())
        {
            v.pop_back();
        }
    }
    int top()
    {
        return v[v.size()-1];
    }
};
int main ()
{
    sstack s;
    for(int i=1;i<8;i++)
    {
        s.insert(i*i);
    }
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}