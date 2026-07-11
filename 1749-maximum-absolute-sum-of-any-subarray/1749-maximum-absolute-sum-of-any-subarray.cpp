class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int minend=0 , minSum=INT_MAX;
        int maxend=0 , maxSum=INT_MIN;
        for(int x:nums){
            maxend=max(x,maxend+x);
            maxSum=max(maxSum,maxend);

            minend=min(x,minend+x);
            minSum=min(minSum,minend);
    }
    return max(abs(minSum),abs(maxSum));
    }
};