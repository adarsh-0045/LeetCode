class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        long long oddCnt=0,evenCnt=1;
        long long csum=0;
        long long total=0;
        long long MOD=1e9+7;
        for(int num:arr){
            csum+=num;
            if(csum%2!=0){
                total=(total+evenCnt)%MOD;
                oddCnt++;
            }
            else{
                total=(total+oddCnt)%MOD;
                evenCnt++;
            }
        }
        return total;
    }
};