#include<bits/stdc++.h>
using namespace std;
void solution(int prices[],int n,int span[])
{
    stack<int>s;
    span[0]=0;
    s.push(0);
    for(int i=1;i<n;i++)
    {
        int currentprice=prices[i];
        while(!s.empty() && prices[s.top()]<=currentprice)
        {
            s.pop();
        }
        if(!s.empty())
        {
            int prev_price=s.top();
            span[i]=i-prev_price;
        }else
        span[i]=i+1;
    
    s.push(i);
    }
}
int main ()
{
    int prices[]={100,80,60,70,60,75,85};
    int n=sizeof(prices)/sizeof(int);
    int span[100]={0};
    solution(prices,n,span);
    for(int i=0;i<n;i++)
    {
        cout<<span[i]<<" ";
    }
    cout<<endl;
    return 0;
}