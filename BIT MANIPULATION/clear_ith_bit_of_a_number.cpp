#include<bits/stdc++.h>
using namespace std;
int clear_bit(int n,int i)
{
    int mask=~(1<<i);
    int bit=(n&mask);
    return bit;
} 
int main ()
{
    int num,i;
    cin>>num>>i;
    cout<<clear_bit(num,i)<<endl;
}