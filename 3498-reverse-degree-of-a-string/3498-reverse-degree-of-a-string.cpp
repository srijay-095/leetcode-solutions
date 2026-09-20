class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum=0;
        int x;
        for(int i=0;i<n;i++)
        {
             x=static_cast<int>(s[i])-97;
             int y=26-x;

            sum+=(i+1)*(y);


        }
        return sum;
        
    }
};