#include<bits/stdc++.h>
using namespace std;
char words[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void ans(int n)
{
    if(n==0)
    {
        return ;
    }
    ans(n/10);
    int digit=n%10;
    cout<<words[digit]<<" ";
}
int main ()
{
    int n;
    cin>>n;
    ans(n);
    cout<<endl;
    return 0;
}