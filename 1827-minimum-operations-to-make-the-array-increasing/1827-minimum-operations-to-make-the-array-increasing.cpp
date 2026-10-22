class Solution {
public:
    int minOperations(vector<int>& nums) {
        long long ops=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                int diff= nums[i-1]-nums[i]+1;
                nums[i]+=diff;
                ops+=diff;
            }
        }
        return (int)ops;
    }
};