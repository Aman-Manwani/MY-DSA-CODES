#include<bits/stdc++.h>
using namespace std;
bool isSorted(int n,int arr[])
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(arr[0]<arr[1] && isSorted(n-1,arr+1))
    {
        return true;
    }
    return false;
}
int main ()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<isSorted(n,arr)<<endl;
    return 0;
}