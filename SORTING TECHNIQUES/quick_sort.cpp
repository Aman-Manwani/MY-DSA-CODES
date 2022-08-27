#include<bits/stdc++.h>
using namespace std;
int pivot_element(int *arr,int s,int e)
{
    int pivot=arr[e];
    int i=s-1;
    int j=s;
    while(j<=e-1)
    {
        if(arr[j]<=pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
        j++;
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}
void quick_sort(int arr[],int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    //rec case
    int p=pivot_element(arr,s,e);
    //left part
    quick_sort(arr,s,p-1);
    //right part
    quick_sort(arr,p+1,e);
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
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}