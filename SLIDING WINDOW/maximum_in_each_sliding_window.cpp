//this is the approach very useful question . using list push the smaller number but if the other number is bigger then we pop the back elements of list to get this number in a right place 
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        vector<int>v;
        if(nums.size()==1)
        {
            v.push_back(nums[0]);
            return v;
        }
        list<int>l;
        l.push_back(nums[0]);
        int i=0,j=0,sum=0;
        int maximum=INT_MIN;
        while(j-i+1<k)
        {
            j++;
            if(l.empty() || l.back()>=nums[j])
            {
                l.push_back(nums[j]);
            }else
            if(nums[j]>l.back())
            {
                while(!l.empty() && l.back()<nums[j])
                {
                    l.pop_back();
                }
                l.push_back(nums[j]);
            }
        }
        v.push_back(l.front());
        while(j+1<nums.size())
        {
            if(nums[i]==l.front())
            {
                l.pop_front();
            }
            i++;j++;
            if(l.empty() || l.back()>=nums[j])
            {
                l.push_back(nums[j]);
            }else
            if(nums[j]>l.back())
            {
                while(!l.empty() && l.back()<nums[j])
                {
                    l.pop_back();
                }
                l.push_back(nums[j]);
            }
            v.push_back(l.front());
        }
        return v;
    }
};