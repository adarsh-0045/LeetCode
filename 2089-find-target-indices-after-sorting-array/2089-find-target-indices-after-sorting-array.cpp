class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        vector<int>res;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target) res.push_back(i);
        // }
        // return res;
        int lower=0,equal=0;
        for(int x:nums){
            if(x<target) lower++;
            else if(x==target) equal++;
        }
        for(int i=0;i<equal;i++){
            res.push_back(lower+i);
        }
        return res;
    }
};