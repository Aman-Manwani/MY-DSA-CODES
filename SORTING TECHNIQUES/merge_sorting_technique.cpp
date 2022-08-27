#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e,int n)
{
    int temp[100],i=s,k=s;
    int mid=(s+e)/2;
    int j=mid+1;
    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }else
            temp[k++]=arr[j++];
    }
    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=e)
    {
        temp[k++]=arr[j++];
    }
    //to copy all elements in original array
    for(int i=s;i<=e;i++)
    {
        arr[i]=temp[i];
    }
}
void merge_sort(int arr[],int s,int e,int n)
{
    //base case
    if(s>=e)
    {
        return;
    }
    //rec case
    int mid=(s+e)/2;
    merge_sort(arr,s,mid,n);
    merge_sort(arr,mid+1,e,n);
    //merge the smaller array to get sorted Arrays
    merge(arr,s,e,n);
}
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}