class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int num:nums) st.insert(num);
        int maxLen=0;
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int curr=num;
                int cnt=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;
                    cnt++;
                }
            maxLen=max(maxLen,cnt);
            }
        }
        return maxLen;
    }
};