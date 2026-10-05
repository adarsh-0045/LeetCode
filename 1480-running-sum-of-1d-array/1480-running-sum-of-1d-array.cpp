class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        int total=0;
        for(auto x:nums){
            total+=x;
            res.push_back(total);
        }
        return res;
    }
};