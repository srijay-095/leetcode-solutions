class Solution {
public:
    bool isPalindrome(int x) {
        long long int rev=0;
        int rem;
        if(x<0)
        {
            return false;
        }
        int copy=x;
        while(x>0)
        {
            rem=x%10;
            rev=10*rev+rem;
            x=x/10;
        }
        return copy==rev;
    }
};