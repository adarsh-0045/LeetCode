class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int xorSum=0;
            for(int k=i;k<n;k++){
                xorSum^=arr[k];
                if(xorSum==0) ans+=(k-i);
            }
        }
        return ans;
    }
};