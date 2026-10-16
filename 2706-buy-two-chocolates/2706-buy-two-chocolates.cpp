class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1=INT_MAX;
        int min2=INT_MAX;
        for(int n:prices){
            if(n<min1){
                min2=min1;
                min1=n;
            }
            else if(n<min2) min2=n;
        }
        int cost=min1+min2;
        if(cost<=money) return money-cost;
        return money;
    }
};