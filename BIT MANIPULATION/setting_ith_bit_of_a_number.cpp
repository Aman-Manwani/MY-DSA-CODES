// this code is about how to set the ith bit of the number binary form 
#include<bits/stdc++.h>
using namespace std;
int set_ith_bit(int &num,int &i)
{
    int mask=(1<<i);
    int bit=(num|mask);
    return bit;
}
int main ()
{
    int num,i;
    cin>>num>>i;
    cout<<set_ith_bit(num,i)<<endl;
}