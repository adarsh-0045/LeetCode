class Solution {
public:
bool check(int num){
    int sum=0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    if(sum%2==0) return true;
    else return false;
}
    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
            if(check(i)) cnt++;
        }
        return cnt;
    }
};