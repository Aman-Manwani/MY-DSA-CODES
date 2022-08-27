//this code doesnt run in vs code but it runs fine on online compiler;
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int start,end;
    cin>>start>>end;
    int arr[10000]={0};
    for(long long int i=3;i<=10000;i+=2)
    {
        arr[i]=1;
    }
    for(long long int i=3;i<=10000;i++)
    {
        if(arr[i]==1)
        {
            for(long long int j=i*i;j<=10000;j+=i)
            {
                arr[j]=0;
            }
        }
    }
    arr[2]=1;
    arr[0]=0;
    arr[1]=0;
    int csum[10000];
    csum[0]=arr[0];
    for(int i=1;i<=10000;i++)
    {
        csum[i]=csum[i-1]+arr[i];
    }
    cout<<csum[end]-csum[start]<<endl;
    return 0;
}