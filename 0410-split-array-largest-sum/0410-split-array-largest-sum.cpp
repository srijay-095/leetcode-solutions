class Solution {
public:
bool cansplit(vector<int> nums,int maxs,int k)
{   
    int n=nums.size();
    int cnt=1,sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+nums[i]>maxs)
        {
            cnt++;
            sum=nums[i];
        }
        else
        {
            sum+=nums[i];
        }
    }
    if(cnt<=k) return true;
    return false;
}

    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k) return -1;
        int maxi=INT_MIN;
        long long sum=0;

        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
            sum+=nums[i];
        }
        int low=maxi;
        int high=sum;
        while(low<=high)
        {
            int mid=low-(low-high)/2;
            if(cansplit(nums,mid,k)==true)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;

        
    }
};