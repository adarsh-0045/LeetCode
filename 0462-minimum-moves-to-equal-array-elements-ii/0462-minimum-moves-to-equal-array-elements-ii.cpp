class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int med=nums[n/2];
        int moves=0;
        for(auto x:nums){
            moves+=abs(x-med);
        }
        return moves;
    }
};