class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        for(int i=0;i<n;i++){
            int x=nums[i];
            int rn=0;
            while(x>0){
                int last_digit=x%10;
                rn=rn*10+last_digit;
                x/=10;
            }
            st.insert(nums[i]);
            st.insert(rn);
        }
        return st.size();
    }
};