class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,k=0;
        int n = chars.size();
        while(i<n){
            char ch = chars[i];
            int count = 0;
            while(i<n && chars[i]==ch){
                i++;
                count++;
            }
            chars[k++] = ch;
            if(count > 1){
                string num = to_string(count);
                for(char c : num){
                    chars[k++] = c;
                }
            }
        }
        return k;
    }
};