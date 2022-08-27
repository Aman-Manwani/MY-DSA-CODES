//o(n^3)method;
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,arr[1000],sum=0,l=0,r=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n+1;j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<arr[k]<<" ";
                sum=sum+arr[k];
            }
            cout<<endl;
            if(sum>largest)
            {
                largest=sum;
                l=i;
                r=j;
            }
            sum=0;
        }
    }
    cout<<"maximum sum = "<<largest<<endl;
    cout<<"subarray which have maximum sum=";
    for(int i=l;i<r;i++)
    {
        cout<<arr[i]<< " ";
    }
    return 0;
}
