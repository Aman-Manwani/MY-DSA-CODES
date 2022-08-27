// priority function at default gives max element at top
// if we want to get min heap we have to initialise the heap as priority_queue<int,vector<int>,greater<int>>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    priority_queue<int>pq;
    priority_queue<int,vector<int>,greater<int>>pq_min;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        pq.push(num);
        pq_min.push(num);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    while(!pq_min.empty())
    {
        cout<<pq_min.top()<<" ";
        pq_min.pop();
    }
    return 0;
}
