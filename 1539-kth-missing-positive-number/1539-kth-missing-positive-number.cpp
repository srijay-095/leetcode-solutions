class Solution {
public:
int miss(vector<int> nums,int i)
{
    return nums[i]-(i+1);
}
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low-(low-high)/2;
            if(miss(arr,mid)<k)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(high==-1) return k;
        int ans=arr[high];
        int need=k-miss(arr,high);
        for(int i=0;i<need;i++)
        {
           ans++;
        }
        return ans;

        
    }
};