class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        int n=nums.size();
        auto l =lower_bound(nums.begin(),nums.end(),x);
        int lb=l-nums.begin();
        auto u= upper_bound(nums.begin(),nums.end(),x);
        int ub=u-nums.begin();
        ub--;
        if(lb==n || nums[lb]!=x)
        {
           return {-1,-1};
        }
        else 
        {   
            return {lb,ub};
        }



        
    }
};