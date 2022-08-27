#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int arr[20],n;
    cin>>n;
    int maximum =INT_MIN;
    int minimum =INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        {
            maximum=arr[i];
        }
        if(arr[i]<minimum)
        {
            minimum=arr[i];
        }
    }
    cout<<"maximum element="<<maximum <<endl;
    cout<<"minimum element="<<minimum <<endl;
    return 0;
}