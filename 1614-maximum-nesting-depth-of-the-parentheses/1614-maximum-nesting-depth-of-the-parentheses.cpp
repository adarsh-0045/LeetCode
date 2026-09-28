class Solution {
public:
    int maxDepth(string s) {
        int n=s.length();
        int maxi=0;
        int op=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                op++;
                maxi=max(maxi,op);
            }
            else if(s[i]==')') op--;
        }
        return maxi;
    }
};