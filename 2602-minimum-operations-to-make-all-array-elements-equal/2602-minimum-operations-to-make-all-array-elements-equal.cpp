class Solution {
public:
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<long long>prefix(n+1,0);
        for(int i=0;i<n;i++) prefix[i+1]=prefix[i]+nums[i];
        vector<long long>ans;
        ans.reserve(queries.size());
        for(long long q:queries){
            int k=lower_bound(nums.begin(),nums.end(),q)-nums.begin();
            long long left_sum=prefix[k];
            long long right_sum=prefix[n]-prefix[k];
            long long left_ops=(long long)k*q-left_sum;
            long long right_ops=right_sum-(long long)(n-k)*q;
            ans.push_back(left_ops+right_ops);
        }
        return ans;
    }
};