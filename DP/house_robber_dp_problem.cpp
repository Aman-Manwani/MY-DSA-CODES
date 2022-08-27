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
    vector<int>nums={4,2,3,6};
    cout<<solve(nums)<<endl;
}