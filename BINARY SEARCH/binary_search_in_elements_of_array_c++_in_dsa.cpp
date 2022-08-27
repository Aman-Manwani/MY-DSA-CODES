#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int arr[20],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int key,mid,first,last;
    cin>>key;
    first=0;
    last=n-1;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(arr[mid]==key)
        {
            cout<<"element found at "<<mid<<endl;
            break;
        }
        if(arr[mid]<key)
        {
            first=mid + 1;
        }
        if(arr[mid]>key)
        {
            last=mid + 1;
        }
        if(last<first)
        {
            cout<<"element not found";
        }
    }
    return 0;
}