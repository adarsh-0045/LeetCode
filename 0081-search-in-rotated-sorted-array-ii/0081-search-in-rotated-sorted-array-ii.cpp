// class Solution {
// public:
//     bool search(vector<int>& nums, int target) {
//         int left=0;
//         int right=nums.size()-1;
//         while(left<=right){
//             int mid=left+(right-left)/2;
//             int midVal=nums[mid];
//             if(midVal==target) return true;
//             if(nums[left]==midVal && midVal==target){
//                 left++;
//                 right--;
//                 continue;
//             }
//             else if(nums[left]<=midVal){
//                 if(target>=nums[left] && target<midVal) right=mid-1;
//                 else left=mid+1;
//             }
//             else{
//                 if(target<=nums[right] && target>midVal) left=mid+1;
//                 else right=mid-1;
//             }
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return true;

            // Cannot determine which half is sorted
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
                continue;
            }

            // Left half is sorted
            if (nums[left] <= nums[mid]) {

                // Target lies in left sorted half
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            // Right half is sorted
            else {

                // Target lies in right sorted half
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }

        return false;
    }
};