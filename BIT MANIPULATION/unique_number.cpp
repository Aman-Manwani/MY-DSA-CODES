#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,ans=0,no;
    cin>>n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>no;
        ans=ans^no;
    }
    cout<<ans<<endl; 
}