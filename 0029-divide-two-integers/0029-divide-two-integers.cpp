class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==0) 
        throw runtime_error("Dicision by zero");
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        bool negative=(dividend<0)^(divisor<0);
        long long a=llabs((long long)dividend);
        long long b=llabs((long long)divisor);
        long long res=0;
        for(int i=31;i>=0;i--){
            if((a>>i)>=b){
                a-=(b<<i);
                res+=(1<<i);
            }
        }
        return negative?-res:res;
    }
};