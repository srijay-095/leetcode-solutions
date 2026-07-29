class Solution {
public:
int maxR(vector<vector<int>>& mat,int mid)
{
    int n=mat.size();
    int m=mat[0].size();
    int maxm=INT_MIN;
    int r=0;
    int c=0;
    while(r<n)
    {
        if(mat[r][mid]>maxm)
        {
            maxm=mat[r][mid];
            c=r;
            
        }
         r++;
       
        
    }
    return c;
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int low=0;
        int high=m-1;
        while(low<=high)
        {
            int mid=low-(low-high)/2;
            int el=maxR(mat,mid);
            int left;
            int right;
            if(mid-1>=0)
            {
                left=mat[el][mid-1];

            }
            else
            {
                 left=-1;
            }
            if(mid+1<m)
            {
                right=mat[el][mid+1];

            }
            else
            {
                right=-1;
            }

            if(mat[el][mid]>left && mat[el][mid]>right)
            {
                return {el,mid};
            }
            else if(mat[el][mid]<left)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
     return {-1,-1};   
    }
};