//striver code,mine is submitted in the leetcode
#include <bits/stdc++.h>

using namespace std;

int solve(vector<int>& arr){
    int n = arr.size();
    int prev = arr[0];
    int prev2 =0;
    
    for(int i=1; i<n; i++){
        int pick = arr[i];
        if(i>1)
            pick += prev2;
        int nonPick = 0 + prev;
        
        int cur_i = max(pick, nonPick);
        prev2 = prev;
        prev= cur_i;
        
    }
    return prev;
}

int main()
{
    vector<int>nums={1,2,3,1};
    int n=nums.size();

    vector<int> temp1;
    vector<int> temp2;
    
    if(n==1)
       return nums[0];
    
    for(int i=0; i<n; i++){
        
        if(i!=0) temp1.push_back(nums[i]);
        if(i!=n-1) temp2.push_back(nums[i]);
    }
    
    long long int ans1 = solve(temp1);
    long long int ans2 = solve(temp2);
    
    cout<< max(ans1,ans2)<<endl;
}