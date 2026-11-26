class Solution {
public:
    bool canAliceWin(int n) {
        int rmove=10;
        int aliceTurn=true;
        while(n>=rmove){
            n-=rmove;
            rmove--;
            aliceTurn=!aliceTurn;
        }
        return !aliceTurn;
    }
};