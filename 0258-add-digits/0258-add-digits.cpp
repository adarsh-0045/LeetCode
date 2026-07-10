class Solution {
public:

    int fun(int num){
        int sum=0;
        while(num>0){
            int d=num%10;
            num=num/10;
            sum=sum+d;
        }
        return sum;
    }

    int addDigits(int num) {
        if(num==0) return 0;
        while(num>=10){
            num=fun(num);
        }
        return num;
    }
};