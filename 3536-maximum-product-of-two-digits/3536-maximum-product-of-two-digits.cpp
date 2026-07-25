class Solution {
public:
    int maxProduct(int n) {
        int first=0 , second =0;
        while(n>0){
            int last_digit=n%10;
            if(last_digit>first){
                second=first;
                first=last_digit;
            }
            else if(last_digit>second){
                second=last_digit;
            }
            n=n/10;
        }
        return first*second;
    }
};