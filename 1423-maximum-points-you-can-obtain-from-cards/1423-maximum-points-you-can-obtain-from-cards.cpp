class Solution {
public:
    int maxScore(vector<int>& v, int k) {
        int n = v.size();
        int sum = 0;
        int len = n - k;
        for(int i = 0; i < len; i++){
            sum += v[i];
        }
        int mini = sum;
        for(int i = len; i < n; i++){
            sum += (v[i] - v[i - len]);
            mini = min(mini, sum);
        }
        int total = accumulate(v.begin(), v.end(), 0);
        return total - mini;
    }
};