class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> st;
        for(int i=2*nums.size()-1;i>=0;i--)
        {
            int id=i%nums.size();
            while(!st.empty() && nums[id]>=st.top())
            {
                st.pop();
            }
        
    
        if(i<nums.size() && !st.empty())
        {
            ans[id]=st.top();
            
        }
        st.push(nums[id]);
        }
        return ans;
        
    }
};