#include<bits/stdc++.h>
using namespace std;
int clear_bits_in_a_range(int n,int i,int j)
{
    int a,b,ones;
    ones=(~0);
    a=ones<<(j+1);
    b=~(ones<<i);
    int mask=(a|b);
    return (n&mask);
}
int main ()
{
    int num,i,j;
    cin>>num>>i>>j;
    cout<<clear_bits_in_a_range(num,i,j)<<endl;
    return 0;
}