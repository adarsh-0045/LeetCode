class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int n=deliciousness.size();
        unordered_map<int,int>mp;
        long long ans=0;
        for(auto x:deliciousness){
            for(int i=1;i<=(1<<22);i*=2){
                if(mp.count(i-x)) ans+=mp[i-x];
            }
            mp[x]+=1;
        }
        return ans%(int)(1e9+7);
    }
};