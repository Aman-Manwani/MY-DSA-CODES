#include<bits/stdc++.h>
using namespace std;
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void ans(int n)
{
    //base case
    if(n==0)
    {
        return ;
    }
    //rec case
    int digit=n%10;
    cout<<words[digit]<<" ";
    ans(n/10);
}
int main ()
{
    int n;
    cin>>n;
    ans(n);
    cout<<endl;
    return 0;
}