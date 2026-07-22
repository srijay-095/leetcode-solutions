class Solution {
public:
bool possible(vector<int> nums,int day,int m,int k)
{
    int req=0;
    int n=nums.size();
    int c=0;
    for(int i=0;i<n;i++)
    {   
        
        
        if(nums[i]<=day)
        c++;
        else
        {
             req+=(c/k);
            c=0;
        }
    }
    req+=(c/k);
    if(req>=m) return true;
    else return false;
}
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size();
        long long b=1ll*m*k;
        if(b>n)
        return -1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]); 
        }
       
        int low=mini;
        int high=maxi;
        int ans;
        while(low<=high)
        {
            int mid=low-(low-high)/2;
            if(possible(nums,mid,m,k)==false)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};