class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        backtrack(nums,0,temp,res);
        return res;
    }
private:
    void backtrack(const vector<int>&nums,int index,vector<int>&temp,vector<vector<int>>&res){
        res.push_back(temp);
        for(int i=index;i<nums.size();i++){
            temp.push_back(nums[i]);
            backtrack(nums,i+1,temp,res);
            temp.pop_back();
        }
    }
};