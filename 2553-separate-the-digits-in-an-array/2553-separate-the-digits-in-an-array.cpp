class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            vector<int>temp;
            while(nums[i]>0){
                int last_digit=nums[i]%10;
                temp.push_back(last_digit);
                nums[i]/=10;
            }
            reverse(temp.begin(),temp.end());
            for(int digit:temp){
                ans.push_back(digit);
            }
        }
        return ans;
    }
};