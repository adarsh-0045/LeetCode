class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>temp;
        for(auto x:nums) temp.push_back(to_string(x));
        sort(temp.begin(),temp.end(),[](string a , string b){
            return a+b>b+a;
        });
        string ans="";
        for(auto x:temp) ans+=x;
        if(ans[0]=='0') return "0";
        return ans;
    }
};