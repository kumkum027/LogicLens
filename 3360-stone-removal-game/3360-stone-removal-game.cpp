class Solution {
public:
    bool canAliceWin(int n) {
        int turn = 10;
        bool alice = true;
        while(n>=turn){
            n -= turn;
            turn--;
            alice = !alice;
        }
        return !alice;
    }
};