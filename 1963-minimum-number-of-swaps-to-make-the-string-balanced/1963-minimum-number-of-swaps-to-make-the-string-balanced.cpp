class Solution {
public:
    int minSwaps(string s) {
        int n=s.length();
        int mismatch=0;
        int max_mismatch=0;
        for(auto ch:s){
            if(ch=='[') mismatch--;
            else mismatch++;
            max_mismatch=max(max_mismatch,mismatch);
        }
        return (max_mismatch+1)/2;
    }
};