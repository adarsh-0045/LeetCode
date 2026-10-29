class Solution {
private:
    bool isPrime(int n){
        if(n<=1) return 0;
        if(n==2 || n==3) return 1;
        if(n%2==0 || n%3==0) return 0;
        for(int i=5;i*i<=n;i+=6){
            if(n%i==0 || n%(i+2)==0) return 0;
        }
        return 1;
    }

public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>res;
        for(int i=2;i<=n/2;i++){
            if(isPrime(i) && isPrime(n-i)) res.push_back({i,n-i});
        }
        return res;
    }
};