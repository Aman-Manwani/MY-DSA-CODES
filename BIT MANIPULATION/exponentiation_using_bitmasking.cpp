#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num,power;
    cin>>num>>power;
    int ans=1;
    while(power>0)
    {
        int last_bit=(power&1);
        if(last_bit==1)
        {
            ans=ans*num;
        }
        num=num*num;
        power=(power>>1);
    }
    cout<<ans<<endl;
    return 0;
}