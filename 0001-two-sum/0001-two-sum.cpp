class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        int remove;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            remove = t-nums[i];
            if(mp.find(remove)!=mp.end() && mp[remove]!=i )
            {   
                return {mp[remove],i};
            }
        }
        return {};
        
    }
};