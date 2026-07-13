class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
                int left=0 , sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int right=sum-nums[i]-left;
            if(left==right)
            return i;
            left=left+nums[i];
        }
        return -1;
    }
};
// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int left=0 , sum=0;
//         for(int i=0;i<nums.size();i++){
//             sum=sum+nums[i];
//         }
//         for(int i=0;i<nums.size();i++){
//             int right=sum-nums[i]-left;
//             if(left==right)
//             return i;
//             left=left+nums[i];
//         }
//         return -1;
//     }
// };