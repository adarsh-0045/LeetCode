class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>>res;
        for(int i=0;i<n;i++){
            int sum=0;
            int x=nums[i];
            while(x>0){
                int ld=x%10;
                sum+=ld;
                x/=10;
            }
            res.push_back({sum,nums[i]});
        }
        sort(res.begin(),res.end());
        vector<int>target(n);
        for(int i=0;i<n;i++){
            target[i]=res[i].second;
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) mp[nums[i]]=i;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=target[i]){
                cnt++;
                int j=mp[target[i]];
                mp[nums[i]]=j;
                mp[target[i]]=i;
                swap(nums[i],nums[j]);
            }
        }
        return cnt;
    }
};