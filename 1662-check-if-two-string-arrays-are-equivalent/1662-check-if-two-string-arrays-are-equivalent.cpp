class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i=0,j=0;
        int p=0,q=0;
        while(i<word1.size() && p<word2.size()){
            if(word1[i][j] != word2[p][q]) return false;
            j++;q++;
            if(j == word1[i].size()){
                i++;
                j=0;
            }
            if(q == word2[p].size()){
                p++;
                q=0;
            }
        }
        return i == word1.size() && p == word2.size();
    }
};