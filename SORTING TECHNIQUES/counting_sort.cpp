#include<bits/stdc++.h>
using namespace std;
void counting_sort(int arr[],int n)
{
    int largest=*max_element(arr,arr+n);
    cout<<largest<<endl;
    int *frequency=new int[largest+1]{0};
    for(int i=0;i<n;i++)
    {
        frequency[arr[i]]++;
    }
    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(frequency[i]>0)
        {
            arr[j]=i;
            j++;
            frequency[i]--;
        }
    }
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
    counting_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}