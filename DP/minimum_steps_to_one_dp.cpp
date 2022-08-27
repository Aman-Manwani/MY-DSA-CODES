#include<bits/stdc++.h>
using namespace std;
int ans(int n,vector<int>&dp)
{
    //base case
    if(n==1)
    {
        return 0;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int op1=INT_MAX;
    int op2=INT_MAX;
    int op3=INT_MAX;
    if(n%3==0)
    {
        op1=ans(n/3,dp);
    }
    if(n%2==0)
    {
        op2=ans(n/2,dp);
    }
    op3=ans(n-1,dp);
    int ans=min(op1,min(op2,op3))+1;
    return dp[n]=ans;
}
int main ()
{
    int n;
    cin>>n;
    vector<int>dp(n+1,0);
    cout<<ans(n,dp)<<endl;
    return 0;
}