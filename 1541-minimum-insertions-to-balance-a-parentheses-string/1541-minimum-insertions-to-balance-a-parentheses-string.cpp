class Solution {
public:
    int minInsertions(string s) {
        int n=s.length();
        int insertions=0;
        int ob=0;
        int i=0;
        while(i<n){
            if(s[i]=='('){
                ob++;
                i++;
            }
            else{
                if(i+1<n && s[i+1]==')')
                i+=2;
                else{
                    insertions++;
                    i++;
                }
            if(ob>0) ob--;
            else insertions++;
            }
        }
        return insertions+(ob*2);
    }
};