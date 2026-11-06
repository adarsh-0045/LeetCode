class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.length();
        int m=p.length();
        if(n<m) return {};
        vector<int>freqS(26,0);
        vector<int>freqP(26,0);
        vector<int>ans;
        for(int i=0;i<m;i++){
        freqP[p[i]-'a']++;
        freqS[s[i]-'a']++;
        }
        if(freqS==freqP) ans.push_back(0);
        for(int i=m;i<n;i++){
            freqS[s[i-m]-'a']--;
            freqS[s[i]-'a']++;
            if(freqP==freqS) ans.push_back(i-m+1);
        }
        return ans;
    }
};