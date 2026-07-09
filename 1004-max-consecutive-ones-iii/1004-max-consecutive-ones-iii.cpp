class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int high=0,low=0;
        int res=INT_MIN;
        int zeroes=0;
        for(high=0;high<n;high++){
            if(nums[high]==0)
            zeroes++;
            while(zeroes>k){
                if(nums[low]==0)
                zeroes--;
                low++;
            }
            int len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};