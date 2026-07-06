class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int i=0 , j=0;
         int idx=0;
         vector<int> ans(m+n);
         while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans[idx]=nums1[i];
                idx++;
                i++;
            }
            else{
                ans[idx]=nums2[j];
                idx++;
                j++;
            }
         }
         while(i<m){
            ans[idx]=nums1[i];
            idx++;
            i++;
         }
         while(j<n){
            ans[idx]=nums2[j];
            idx++;
            j++;
         }
         for (int k = 0; k < m + n; k++) {
    nums1[k] = ans[k];
}
    }
};