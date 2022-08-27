#include<bits/stdc++.h>
using namespace std;
int ways(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    int ans=ways(n-1)+(n-1)*ways(n-2);
    return ans;
}
int main ()
{
    int n;
    cin>>n;
    cout<<ways(n)<<endl;
    return 0;
}