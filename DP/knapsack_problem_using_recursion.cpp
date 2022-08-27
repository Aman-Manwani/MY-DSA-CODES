#include<bits/stdc++.h>
using namespace std;
int knapsack(int n,int cap,int weight[],int price[])
{   
    //base case
    if(n==0||cap==0)
    {
        return 0;
    }
    int inc=0,exc=0,ans=0;
    //rec case
    //inc the last object
    if(weight[n-1]<=cap)
    {
        inc=price[n-1]+knapsack(n-1,cap-weight[n-1],weight,price);
    }
    //exclude the last object
    exc=knapsack(n-1,cap,weight,price);
    ans=max(inc,exc);
    return ans;
}
int main ()
{
    int n,c;
    cin>>n>>c;
    int weight[n];
    int price[n];
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>price[i];
    } 
    for(int i=0;i<n;i++)
    {
        cout<<weight[i]<<" "<<price[i]<<endl;
    }
    cout<<knapsack(n,c,weight,price)<<endl;
    return 0;
}