#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int arr_size=sizeof(arr)/sizeof(int);
    int k;
    cin>>k;
    int i=0,j=0,sum=0;
    int maximum=INT_MIN;
    while(j-i+1<=k)
    {
        sum=sum+arr[j];
        j++;
    }
    j--;
    while(j+1<arr_size)
    {
        if(sum>maximum)
        {
            maximum=sum;
        }    
        sum=sum-arr[i];
        i++;j++;
        sum+=arr[j];
    }
    if(sum>maximum)
    {
        maximum=sum;
    }
    
    cout<<maximum<<endl;
    return 0;
}