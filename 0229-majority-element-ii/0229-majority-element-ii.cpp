class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
        int c1=0,c2=0;
        int el1=INT_MIN,el2=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(c1==0 && el2!=nums[i])
            {
                el1=nums[i];
                c1++;
            }
            else if(c2==0 && el1!=nums[i])
            {
                el2=nums[i];
                c2++;
            }
            else if(nums[i]==el1)
            {
                c1++;
            }
            else if(nums[i]==el2)
            {
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }
        int k1=0,k2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==el1)
            {
                k1++;
            }
            else if(nums[i]==el2)
            {
                k2++;
            }
            
        }
        if(k1>n/3) res.push_back(el1);
        if(k2>n/3) res.push_back(el2);
        return res;
        
    }
};