#include<bits/stdc++.h>
using namespace std;
int primeseive(int *p,int n)
{

    for(int i=3;i<=n;i+=2)
    {
        p[i]=1;
    }
    for(int i=3;i<=n;i+=2)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                cout<<j<<" ";
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[0]=0;
    p[1]=0;
}
int main ()
{
    int n;
    cin>>n;
    int arr[n]={0};
    primeseive(arr,n);
    int count =0;
    for(int i=0;i<=n;i++)
    {
        if(arr[i]==1)
        {
            count ++;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<count<<endl;
}








