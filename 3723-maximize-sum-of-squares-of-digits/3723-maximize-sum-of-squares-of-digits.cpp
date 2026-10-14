class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        for(int i=num-1;i>=0;i--){
            for(int j=9;j>=0;j--){
                if(j>sum) continue;
                s+=(j+'0');
                sum-=j;
                break;
            }
        }
        if(sum!=0){
            return "";
        }
        return s;
    }
};