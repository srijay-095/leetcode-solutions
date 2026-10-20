class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(),-1);
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!st.empty() && nums[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                for(int j=0;j<nums.size();j++)
                {
                    if(nums[j]>nums[i])
                    {
                        ans[i]=nums[j];
                        st.push(nums[i]);
                        break;
                    }
                }

            }
            if( !st.empty() && nums[i]<st.top())
            {
                ans[i]=st.top();
                
            }
            st.push(nums[i]);
            
        }
        return ans;

        
    }
};