class Solution {
private:
    void backtrack(vector<int>&candidates,int target,int index,vector<vector<int>>&res,vector<int>&curr){
        if(target==0) {
            res.push_back(curr);
            return;
        }
        for(int i=index;i<candidates.size();i++){
        if(candidates[i]>target) continue;
        curr.push_back(candidates[i]);
        backtrack(candidates,target-candidates[i],i,res,curr);
        curr.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>curr;
        backtrack(candidates,target,0,res,curr);
        return res;
    }
};