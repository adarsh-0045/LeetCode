class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        for(int i=0;i<n;i++){
            nums[i]=abs(nums[i]); 
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++){
            sum-=(long)nums[i]*(long)nums[i];
        }
        for(int i=n/2;i<n;i++){
            sum+=(long)nums[i]*(long)nums[i];
        }
        return sum;
    }
};