#include<bits/stdc++.h>
using namespace std;
long long int power(int a,int n)
{
    //base case
    if(n==0)
    {
        return 1;
    }
    //rec case
    return a*power(a,n-1);
}
long long int fastpower(int a,int n)
{
    if(n==0)
    {
        return 1;
    }
    long long int num=fastpower(a,n/2);
    if(n%2==0)
    {
        return num*num;
    }else
    return num*num*a;
}
int main ()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n)<<endl;
    cout<<fastpower(a,n)<<endl;
    return 0;
}