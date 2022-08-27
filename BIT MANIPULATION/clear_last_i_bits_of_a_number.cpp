#include<bits/stdc++.h>
using namespace std;
int clear_range_of_bits(int n,int i)
{
    int bit=(-1<<(i+1));
    return (n&bit);
}
int main ()
{
    int num,i;
    cin>>num>>i;
    cout<<clear_range_of_bits(num,i)<<endl;
}