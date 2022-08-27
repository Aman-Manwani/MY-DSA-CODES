#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int ropes[]={2,3,6,4};
    int n=sizeof(ropes)/sizeof(int);
    priority_queue<int,vector<int>,greater<int>>pq(ropes,ropes+n);
    int cost=0;
    while(pq.size()>1)
    {
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        int length=a+b;
        cost+=length;
        pq.push(length);
    }
    cout<<cost<<endl;
    return 0;
}