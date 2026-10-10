class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int n=word.size();
        int maxlen=0;
        int left=0;
        int vowels=1;
        for(int i=1;i<n;i++){
            if(word[i]<word[i-1]){
                left=i;
                vowels=1;
            }
            if(word[i]>word[i-1]) vowels++;
            if(vowels==5) maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};