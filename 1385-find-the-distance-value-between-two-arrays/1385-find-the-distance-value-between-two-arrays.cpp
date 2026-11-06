class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1=arr1.size();
        int n2=arr2.size();
        sort(arr2.begin(),arr2.end());
        int cnt=0;
        for(auto x:arr1){
            auto it=lower_bound(arr2.begin(),arr2.end(),x-d);
            if(it!=arr2.end() && *it<=x+d) continue;
            cnt++;
        }
        return cnt;
    }
};