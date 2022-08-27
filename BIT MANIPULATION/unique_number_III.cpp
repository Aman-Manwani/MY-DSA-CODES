#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x;
    cin>>n;
    vector<int>ans(64,0);
    vector<int>nums(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>x;
        nums[i]=x;
        int j=0;
        while(x)
        {
            ans[j]=ans[j]+(x&1);
            x=x>>1;
            j++;
        }
    }
    int res=0,mult=1;
    for(int i=0;i<64;i++)
    {
        ans[i]=ans[i]%3;
        res=res+ans[i]*mult;
        mult=mult*2;
    }
    cout<<res<<endl;
    return 0;
}