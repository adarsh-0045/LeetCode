class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        int count[26]={0};
        for(char char_s:s){
            count[char_s-'a']+=1;
        }
        for(char char_t:t){
            count[char_t-'a']-=1;
        }
        for(int c:count){
            if(c!=0) return false;
        }
        return true;
    }
};