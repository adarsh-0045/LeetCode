class Solution {
public:
    int lastRemaining(int n) {
        // vector<int>arr;
        // for(int i=1;i<=n;i++) arr.push_back(i);
        // bool left=true;
        // while(arr.size()>1){
        //     vector<int>temp;
        //     if(left){
        //         for(int i=1;i<arr.size();i+=2) temp.push_back(arr[i]);
        //     }
        //     else{
        //         for(int i=arr.size()-2;i>=0;i-=2) temp.push_back(arr[i]);
        //         reverse(temp.begin(),temp.end());
        //     }
        // arr=temp;
        // left=!left;
        // }
        // return arr[0];

        int head=1;
        int step=1;
        int remaining=n;
        bool left=true;

        while(remaining>1){
            if (left || remaining%2==1){
                head=head+step;
            }
            remaining=remaining/2;
            step=step*2;
            left=!left;
        }
        return head;
    }
};