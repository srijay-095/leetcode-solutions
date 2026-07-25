class Solution {
public:
    int maxProduct(int n) {
        std::string s = std::to_string(n);
        sort(s.begin(),s.end());
        int x=s.size();
        int an1= s[x-1]-'0';
        int an2=s[x-2]-'0';
        int ans=an1*an2;
        return ans;
        
    }
};