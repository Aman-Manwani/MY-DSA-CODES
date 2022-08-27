#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>nums={4,1,1,1,2,3,5};
    int k;
    cin>>k;
    int i=0,j=0;
    int sum=0;
    int maxi=0;
    while(j<nums.size())
    {
        if(sum>k)
        {
            while(sum>k)
            {
                sum=sum-nums[i];
                i++;
            }
        }else
        if(sum==k)
        {
            maxi=max(maxi,j-i+1);
        }else
        if(sum<k)
        {
            sum+=nums[j];
            j++;
        }
    }
    cout<<maxi<<endl;
    return 0;
}