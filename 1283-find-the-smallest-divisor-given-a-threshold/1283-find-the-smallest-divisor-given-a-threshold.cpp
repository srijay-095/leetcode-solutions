class Solution {
public:
bool res(vector<int> nums,int div,int t)
{   
    int sum=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
       sum+=(nums[i]+div-1)/div;
    }
    if(sum<=t) return true;
    return false;


}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int low=1;
        int high=maxi;
        int ans;

        while(low<=high)
        {
            int mid=low-(low-high)/2;
            if(res(nums,mid,threshold)==false)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                high = mid-1;
            }
        }

           
        

       return ans; 

        
    }
};