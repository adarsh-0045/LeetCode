class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        int l=0;
        int op=0;
        string res="";
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='(') op++;
            else op--;
        if(op==0){
            res+=s.substr(l+1,i-(l+1));
            l=i+1;
        }
        }
        return res;
    }
};