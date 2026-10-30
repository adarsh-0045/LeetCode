class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int cnt=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='W') cnt++;
        }
        int minCount=cnt;
        for(int i=k;i<blocks.length();i++){
            if(blocks[i-k]=='W') cnt--;
            if(blocks[i]=='W') cnt++;
            minCount=min(minCount,cnt);
        }
        return minCount;
    }
};