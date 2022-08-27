#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num,deci_num=0,ans;
    cin>>num;
    int mult=1;
    while(num>0)
    {
        ans=(num&1);
        num=num>>1;
        deci_num=deci_num+mult*ans;
        mult=mult*10;
    }
    cout<<deci_num<<endl;
    return 0;
}