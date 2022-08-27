#include<bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    long long int ans=n*fact(n-1);
    return ans;
}
int main ()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    return 0;
}