class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int smallest=nums[0];
        int largest=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>largest) largest=nums[i];
            if(nums[i]<smallest) smallest=nums[i];
        }
        return gcd(smallest , largest);
    }
};