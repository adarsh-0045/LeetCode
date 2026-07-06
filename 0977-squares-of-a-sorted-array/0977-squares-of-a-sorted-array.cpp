class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(nums[i]<=0)
            neg.push_back(nums[i]);
            else
            pos.push_back(nums[i]);
        }
        if(neg.size()==0){
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];
            }
                return pos;
        }
        if(pos.size()==0){
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
            }
                reverse(neg.begin(),neg.end());
                return neg;
        }
        int i=0,j=0;
        int idx=0;
        int p=pos.size();
        int q=neg.size();
        vector<int> res(p+q);
        for(int i=0;i<neg.size();i++)
        neg[i]=neg[i]*neg[i];

        reverse(neg.begin(),neg.end());
        for(int i=0;i<pos.size();i++)
        pos[i]=pos[i]*pos[i];
        while(i<q && j<p){
            if(neg[i]<=pos[j]){
                res[idx]=neg[i];
                idx++;
                i++;
            }
            else{
                res[idx]=pos[j];
                idx++;
                j++;
            }
        }
        while(i<q){
            res[idx]=neg[i];
            idx++;
            i++;
        }
        while(j<p){
            res[idx]=pos[j];
            idx++;
            j++;
        }
        return res;
    }
};