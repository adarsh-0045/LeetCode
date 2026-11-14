class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r){
        int n=nums.size();
        int miniSum=INT_MAX;
        for(int i=0;i<n;i++){
            int csum=0;
            for(int j=i;j<n;j++){
                csum+=nums[j];
                int len=j-i+1;
                if(len>=l && len<=r && csum>0){
                    miniSum=min(miniSum,csum);
                }
                if(len>r) break;
            }
        }
        return miniSum==INT_MAX?-1:miniSum;
    }
};