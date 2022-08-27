#include<bits/stdc++.h>
using namespace std;
int fbn(int n)
{
    if(n==0|| n==1)
    {
        return n;
    }
    int ans=fbn(n-1)+fbn(n-2);
    return ans;
}
int main ()
{
    int n;
    cin>>n;
    cout<<fbn(n)<<endl;
    return 0;
}