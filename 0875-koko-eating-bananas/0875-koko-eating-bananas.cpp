class Solution {
public:
long long reqtime(vector<int> nums,int mid)
{
    long long reqtime=0;
    for(int i=0;i<nums.size();i++)
    {   
        reqtime+=(nums[i]+mid-1)/mid;
    }
    return reqtime;
}
    int minEatingSpeed(vector<int>& nums, int h) {
        int n=nums.size();
        int m=INT_MIN;
        for(int i=0;i<n;i++)
        {
            m=max(m,nums[i]);
        }
        int low=1;
        int high=m;
        int ans;
        while(low<=high)
        {
            int mid=low-(low-high)/2;
            if(reqtime(nums,mid)<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};