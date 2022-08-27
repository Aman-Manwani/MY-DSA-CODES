#include<bits/stdc++.h>
using namespace std;
int ways(int l)
{
    if(l==1 || l==0)
    {
        return l+1;
    }
    if(l<0)
    {
        return 0;
    }
    int ans=ways(l-1)+ways(l-2);
    return ans;
}
int main ()
{
    int len;
    cin>>len;
    cout<<ways(len)<<endl;
    return 0;
}