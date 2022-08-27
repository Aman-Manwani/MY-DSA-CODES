//o(n^2)method;
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100],csum[100],l=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        csum[i]=csum[i-1]+arr[i];
    }
    int currentsum=0;
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currentsum=0;
            currentsum=csum[j]-csum[i-1];
            if(currentsum>largest)
            {
                largest=currentsum;
                l=i;
                r=j;
            }
        }
    }
    cout<<"maximum sum of subarray="<<largest<<endl;
    cout<<"subarray which have maximum sum="; 
    for(int i=l;i<=r;i++)
    {
        cout<<arr[i];
    }
    return 0;
}