class Solution {
public:
bool pos(vector<int> nums,int mid,int h)
{   
    long long time=0;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        time+=((nums[i]+mid-1)/mid);
    }
    if(time<=h) return true;
    return false;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,piles[i]);
            sum+=piles[i];
        }
        int low=1;
        int high=maxi;
        int ans=high;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(pos(piles,mid,h)==true)
            {
                high=mid-1;
                ans=mid;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
        
    }
};