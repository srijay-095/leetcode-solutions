class Solution {
public:
bool canweplace(vector<int> arr,int force,int m)
{   
    int n=arr.size();
    int cnt=1,last=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]-last>=force)
        {
            cnt++;
            last=arr[i];
            if(cnt>=m)
            {
                return true;
            }
            
        }
        
    }
     return false;
        
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int low=1;
        int high=position[n-1]-position[0];
        while(low<=high)
        {
            int mid=low-(low-high)/2;
            if(canweplace(position,mid,m)==true)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        return high;

        
    }
};