#include<bits/stdc++.h>
using namespace std;
int mul(int a,int b)
{
    if(b==1)    
    {
        return 1;
    }
    int ans=a+mul(a,b-1);
    return ans;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b)<<endl;
    return 0;
}