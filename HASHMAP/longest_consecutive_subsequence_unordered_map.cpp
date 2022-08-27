#include<bits/stdc++.h>
using namespace std;
int ans(int arr[],int n)
{
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        if(m.count(num-1)==0 && m.count(num+1)==0)
        {
            m[num]=1;
        }else
        if(m.count(num-1) && m.count(num+1))
        {
            int len1=m[num-1];
            int len2=m[num+1];
            m[num-len1]=len1+len2+1;
            m[num+len2]=len1+len2+1;
            m[num]=len1+len2+1;
        }else
        if(m.count(num-1) && m.count(num+1)==0)
        {
            int len=m[num-1];
            m[num-len]=len+1;
            m[num]=len+1;           
        }else
        {
            int len=m[num+1];
            m[num+len]=len+1;
            m[num]=len+1;
        }
        int largest=0;
        for(auto it:m)
        {
            cout<<it.second<<" ";
            if(it.second>largest)
            {
                largest=it.second;
            }
        }
        return largest;
    }
}
int main ()
{
    int arr[]={14,5,1,2,6,3,7,8,9,13,15,11,12,13,17,10};
    int n=sizeof(arr)/sizeof(int);
    cout<<ans(arr,n)<<endl;
    return 0;
}