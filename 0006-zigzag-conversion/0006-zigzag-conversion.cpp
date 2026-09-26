class Solution {
public:
    string convert(string s, int numRows) {
        int len=s.length();
        if(numRows==1 || numRows>=len) return s;
        string result="";
        int cycle=2*numRows-2;
        for(int row=0;row<numRows;row++){
            for(int j=row;j<len;j+=cycle){
                result+=s[j];
                int diag=j+cycle-2*row;
                if(row!=0 && row!=numRows-1 && diag<len) result+=s[diag];
            }
        }
        return result;
    }
};