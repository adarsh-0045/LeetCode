class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>arr(m);
        for(int i=0;i<m;i++){
            string ans="";
            for(int j=0;j<n;j++){
                if(i==0 || j==n-1) ans+='.';
                else ans+='#';
            }
            arr[i]=ans;
        }
        return arr;
    }
};