#include <iostream>
using namespace std;
int main()
{
    int n,arr[1000],target;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    int i=0;
    int j=(sizeof(arr)/sizeof(int))-1;
    int mid,ans;
    while(i<=j)
    {
        mid=i+(j-i)/2;
        if(arr[mid]==target)
        {
            ans= mid;
            break;
        }else
        if(arr[i]<=arr[mid])
        {
            if(target>=arr[i] && target<=arr[mid])
            {
                j=mid-1;
            }else
                i=mid+1;
        }else
        {
            if(target<=arr[j] && target>=arr[mid])
            {
                i=mid+1;
            }else
                j=mid-1;
        }
    }
    cout<<ans;
    return 0;
}
