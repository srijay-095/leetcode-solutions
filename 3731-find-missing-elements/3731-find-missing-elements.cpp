class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        set<int> st;
        for(int i=0;i<n;i++)
        {
        st.insert(nums[i]);

        }
        vector<int> arr;
        for(int i=mini;i<=maxi;i++)
        {
            arr.push_back(i);
        }
        for(int i=0;i<arr.size();i++)
        {
            if(st.find(arr[i])==st.end())
            {
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};