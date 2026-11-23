class Solution {
public:
    bool check(string s,int i,int j){
        while(i<j){
            if(s[i] != s[j]) return false;
            i++;j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;int j=s.length()-1;
        while(i<j){
            if(s[i] == s[j]){
                i++;j--;
            }
            else{
                bool first = check(s,i+1,j);
                bool second = check(s,i,j-1);
                return first||second;
            }
        }
        return true;
    }
};