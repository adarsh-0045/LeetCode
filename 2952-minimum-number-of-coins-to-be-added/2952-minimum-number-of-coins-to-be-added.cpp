class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        int n=coins.size();
        sort(coins.begin(),coins.end());
        long long curr_max=0;
        int added_coins=0;
        int i=0;
        while(curr_max<target){
            if(i<n && coins[i]<=curr_max+1){
                curr_max+=coins[i];
                i++;
            }
            else{
                curr_max+=(curr_max+1);
                added_coins++;
            }
        }
        return added_coins;
    }
};