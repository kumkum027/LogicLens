class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                char num = board[i][j];
                if(num == '.') continue;
                if(st.find(num) != st.end()){
                    return false;
                }
                st.insert(num);
            }
        }
        for(int i=0;i<9;i++){
            unordered_set<char> st;
            for(int j=0;j<9;j++){
                char num = board[j][i];
                if(num == '.') continue;
                if(st.find(num) != st.end()){
                    return false;
                }
                st.insert(num);
            }
        }
        for(int i=0;i<9;i += 3){
            for(int j=0;j<9;j += 3){
                unordered_set<char> st;
                for(int r=i;r < i+3;r++){
                    for(int c=j;c < j+3;c++){
                        char num = board[r][c];
                        if(num == '.') continue;
                        if(st.find(num) != st.end()){
                            return false;
                        }
                        st.insert(num);
                    }
                }
            }
        }
        return true;
    }
};