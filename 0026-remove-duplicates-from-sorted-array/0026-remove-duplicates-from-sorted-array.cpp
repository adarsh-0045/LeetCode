class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int res=1;
        int low=0;
        int high=1;
        while(high<n){
            if(nums[high]==nums[high-1]){
            high++;
            continue;
        }
        nums[low+1]=nums[high];
        res++;
        low++;
        high++;
    }
    return res;
    }
};