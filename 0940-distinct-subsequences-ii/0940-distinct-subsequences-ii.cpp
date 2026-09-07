class Solution {
public:
    int distinctSubseqII(string s) {
        long long mod=1e9+7;
        int n=s.length();
        long long total=1;
        vector<long long>last(256,0);
        for(auto ch:s){
            long long newTotal=(2*total-last[ch]+mod)%mod;
            last[ch]=total;
            total=newTotal;
        }
        return (total-1+mod)%mod;
    }
};