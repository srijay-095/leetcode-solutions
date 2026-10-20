class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans=nums2;
        stack<int> st;
        for(int i=ans.size()-1;i>=0;i--)
        {
           
            while(!st.empty() && nums2[i]>=st.top())
            {
                st.pop();

            }
             if(st.empty())
            {
                ans[i]=-1;
                st.push(nums2[i]);
                continue;
            }
            if(nums2[i]<st.top())
            {
                ans[i]=st.top();
                st.push(nums2[i]);

            }
            

        }
        vector<int> res=nums1;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    res[i]=ans[j];
                    break;
                }
            }
        }
        return res;
    }
};