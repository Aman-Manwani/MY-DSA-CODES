#include<bits/stdc++.h>
using namespace std;
void allocc(int n,int arr[],int i,int key,int store[],int j)
{
    if(i==n)
    {
        return;
    }
    if(arr[i]==key)
    {
        cout<<i<<" ";
        store[j]=i;
        j++;
    }
    allocc(n,arr,i+1,key,store,j);
}
int main ()
{
    int n;
    int arr[100],key;
    int store[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    allocc(n,arr,0,key,store,0);
    cout<<endl;
    int x=sizeof(store)/sizeof(int);
    for(int i=0;i<x;i++)
    {
        cout<<store[i]<<" ";
    }
    return 0;
}