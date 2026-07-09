class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if(n<k) return 0;
        int low=0,high=k-1;
        int sum=0;
        for(int i=low;i<=high;i++)
            sum=sum+nums[i];
            double res=(double)sum/k;
        while(high<n-1){
            low++;
            high++;
            sum=sum-nums[low-1];
            sum=sum+nums[high];
            double avg=(double)sum/k;
            res=max(res,avg);
        }
        return res;
    }
};