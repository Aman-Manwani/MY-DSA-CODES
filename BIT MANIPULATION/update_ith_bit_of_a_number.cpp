#include<bits/stdc++.h>
using namespace std;
int update(int n,int i,int v)
{
    int mask=~(1<<i);
    int bit=(n&mask);
    int mask_new=(v<<i);
    int resultant=(bit|mask_new);
    return resultant;
}
int main ()
{
    int num,i,v;
    cin>>num>>i>>v;
    cout<<update(num,i,v);
    return 0;
}