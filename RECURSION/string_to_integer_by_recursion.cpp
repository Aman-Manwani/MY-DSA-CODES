#include<bits/stdc++.h>
using namespace std;
int ans(int n,char *arr)
{
    if(n==0)
    {
        return 0;
    }    
    int digit=arr[n-1]-'0';
    int smaller_num=ans(n-1,arr);
    return smaller_num*10+digit;
}
int main ()
{
    char arr[100];
    cin>>arr;
    int n=strlen(arr);
    cout<<ans(n,arr)<<endl;
    return 0;
}