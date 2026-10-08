class Solution {
private:
    void solve(int index,string& digits,string& temp,vector<string>&res,unordered_map<int,string>&mp){
        if(index==digits.length()){
            res.push_back(temp);
            return;
        }
        int digit=digits[index]-'0';
        string letters=mp[digit];
        for(int i=0;i<letters.length();i++){
            temp.push_back(letters[i]);
            solve(index+1,digits,temp,res,mp);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        int n=digits.length();
        vector<string>res;
        unordered_map<int,string>mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        string temp="";
        solve(0,digits,temp,res,mp);
        return res;
    }
};