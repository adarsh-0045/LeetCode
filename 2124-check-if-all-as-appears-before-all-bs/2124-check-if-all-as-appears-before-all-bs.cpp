class Solution {
public:
    bool checkString(string s) {
     bool seen=false;
     for(auto c:s){
        if(c=='b') seen=true;
        else if(seen) return false;
     }   
     return true;
    }
};