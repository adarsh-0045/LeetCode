class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int n=nums.size();
        int And=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                if(And==-1) And=nums[i];
                else And=And&nums[i];
            }
        }
        return And==-1?0:And;
    }
};