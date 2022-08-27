#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[20],n;
    
    cout<<"enter number of elements=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
