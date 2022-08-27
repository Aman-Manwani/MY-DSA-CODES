#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>nums={1,6,8,4,5,2,9,5,6};
    sort(nums.begin(),nums.end());
    int target;
    cin>>target;
    vector<int>v;
    bool present=binary_search(nums.begin(),nums.end(),target);
        if(present)
        {
            auto it=lower_bound(nums.begin(),nums.end(),target);
            int i=it-nums.begin();
            v.push_back(i);
            auto itr=upper_bound(nums.begin(),nums.end(),target);
            int r=itr-1 -nums.begin();
            v.push_back(r);
        }
        cout<<v[0]<<" "<<v[1];
    return 0;
}
