class Solution {
public:
    bool checkDivisibility(int n) {
        int s=0,p=1,rem;
        int copy=n;
        while(n>0)
        {
            rem=n%10;
            s+=rem;
            p*=rem;
            n/=10;
        }
        if(copy%(s+p)==0) return true;
        return false;
    }
};