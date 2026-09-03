// class Solution {
// public:
//     bool uniformArray(vector<int>& nums1) {
//         // int n=nums1.size();
//         // for(int i=1;i<n;i++){
//         //     if(nums1[i]%2!=nums1[0]%2) return false;
//         // }
//         return true;
//     }
// };
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = *min_element(nums1.begin(), nums1.end());
        bool allSameParity = true;
        for(int i = 1; i < nums1.size(); i++) {
            if(nums1[i] % 2 != nums1[0] % 2) {
                allSameParity = false;
                break;
            }
        }
        if(allSameParity)
            return true;
        return mini % 2 == 1;
    }
};