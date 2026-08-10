class Solution {
public:
int prod(int i)
{
    int p=1;
    while(i>0)
    {
    int rem=i%10;
     p=p*rem;
    i=i/10;
    }
    return p;
   
}
    int smallestNumber(int n, int t) {
        int i=n;
        while(i>=n)
        {   
            if(prod(i)%t==0)
            {
                return i;
            }
            i++;
        }
        return 0;
    }
};