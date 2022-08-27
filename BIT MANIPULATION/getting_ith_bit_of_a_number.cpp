#include<bits/stdc++.h>
using namespace std;
int ith_bit(int n,int i)
{
    int mask=(1<<i);
    int bit= (n&mask) > 0 ? 1: 0 ;
    return bit;
}
int main ()
{
    int n,i;
    cin>>n>>i;
    cout<<ith_bit(n,i)<<endl;
}
// bit value starts from 0 so it gave result of i-1 bit