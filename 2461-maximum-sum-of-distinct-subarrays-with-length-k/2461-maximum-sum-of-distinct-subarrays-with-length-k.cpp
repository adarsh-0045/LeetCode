class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxSum=0;
        int l=0;
        int n=nums.size();
        long long sum=0;
        unordered_set<int>st;
        for(int right=0;right<n;right++){
            while(st.count(nums[right])){
                st.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
            st.insert(nums[right]);
            sum+=nums[right];
            if(right-l+1==k){
                maxSum=max(maxSum,sum);
                st.erase(nums[l]);
                sum-=nums[l];
                l++;
            }
        }
        return maxSum;
    }
};