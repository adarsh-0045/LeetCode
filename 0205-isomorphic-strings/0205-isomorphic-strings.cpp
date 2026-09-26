class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,char>mpS;
        unordered_map<char,char>mpT;
        for(size_t i=0;i<s.length();i++){
           char charS=s[i];
           char charT=t[i];
            if(mpS.find(charS)!=mpS.end()){
                if(mpS[charS]!=charT) return false;
            }
            else{
                mpS[charS]=charT;
            }
            if(mpT.find(charT)!=mpT.end()){
                if(mpT[charT]!=charS) return false;
            }
            else mpT[charT]=charS;
        }
        return true;
    }
};