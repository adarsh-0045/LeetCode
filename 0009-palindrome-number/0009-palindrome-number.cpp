class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        long long rn=0;
        int dup=x;
        while(x>0){
            int ld=x%10;
            rn=rn*10+ld;
            x=x/10;
        }
        return rn==dup;
    }
};