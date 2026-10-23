class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>res;
        if(n==0){
            res.push_back(0);
            return res;
        }
        res.push_back(0);
        for(int i=0;i<n;i++){
            int size=res.size();
            for(int j=size-1;j>=0;j--) res.push_back(res[j]|(1<<i));
        }
        return res;
    }
};