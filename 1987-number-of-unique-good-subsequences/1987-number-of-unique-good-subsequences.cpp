class Solution {
public:
    int numberOfUniqueGoodSubsequences(string binary) {
        const int mod=1e9+7;
        long long end0=0;
        long long end1=0;
        bool hasZero=false;
        for (char ch:binary) {
            if (ch=='1') {
                end1=(end0+end1+1)%mod;
            } 
            else {
                end0=(end0+end1)%mod;
                hasZero=true;
            }
        }
        return (end0+end1+(hasZero ? 1 : 0))%mod;
    }
};