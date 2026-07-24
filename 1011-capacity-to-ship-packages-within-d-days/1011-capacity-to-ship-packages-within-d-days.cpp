class Solution {
public:
bool cd(const vector<int>& nums,int cap,int days)
{
    int n=nums.size();
    int c=1,load=0;
    for(int i=0;i<n;i++)
    {
        if(load+nums[i]>cap)
        {
            c++;
            load=nums[i];
        }
        else
        {
            load+=nums[i];
        }
    }
    if(c<=days) return true;
    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,weights[i]);
            sum+=weights[i];
        }
        int low=maxi;
        int high=sum;
        int ans=sum;
        while(low<=high)
        {
            int mid=low-(low-high)/2;
            if(cd(weights,mid,days)==true)
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