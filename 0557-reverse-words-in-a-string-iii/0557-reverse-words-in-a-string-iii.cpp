class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int start = 0;
        while(i<s.size()){
            while(i<s.size() && s[i]!= ' '){
            i++;
            }
            int left = start;
            int right = i-1;
            while(left < right){
                swap(s[left],s[right]);
                    left++;
                    right--;
            }
            start = i+1;
            i = start;
        }
        return s;
    }
};