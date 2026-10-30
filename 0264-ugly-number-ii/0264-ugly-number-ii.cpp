class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ugly(n);
        ugly[0]=1;
        int i2=0,i3=0,i5=0;
        for(int i=1;i<n;i++){
            int nex2=ugly[i2]*2;
            int nex3=ugly[i3]*3;
            int nex5=ugly[i5]*5;
            int nextUgly=min({nex2,nex3,nex5});
            ugly[i]=nextUgly;
            if(nextUgly==nex2) i2++;
            if(nextUgly==nex3) i3++;
            if(nextUgly==nex5) i5++;
        }
        return ugly[n-1];
    }
};