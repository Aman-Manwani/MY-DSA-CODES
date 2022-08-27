#include<bits/stdc++.h>
using namespace std;
int power(int a,int n)
{
    if(n==1)
    {
        return 1;
    }
    int ans=a*power(a,n-1);
    return ans;
}
int main ()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    return 0;
}