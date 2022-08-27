#include<bits/stdc++.h>
using namespace std;
int count_set_bits(int n)
{
    int ans=0;
    while(n>0)
    {
        ans=ans+(n&1);
        n=(n>>1);
    }
    return ans;
}
int count_set_bits_fast_method(int n)
{
    int ans=0;
    while(n>0)
    {
        n=(n&(n-1));
        ans++;
    }
    return ans;
}
int main ()
{
    int num;
    cin>>num;
    cout<<count_set_bits(num)<<endl;
    cout<<count_set_bits_fast_method(num)<<endl;;
    cout<<__builtin_popcount(num)<<endl;
    return 0;
}