class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        int x=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='(') x++;
            else x--;
            if(x<0){
                cnt++;
                x=0;
            }
        }
        if(x>0) cnt+=x;
        return cnt;
    }
};