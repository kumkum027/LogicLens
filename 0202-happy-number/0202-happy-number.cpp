class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(true){
            if(n == 1) return true;
            if(st.find(n) != st.end()) return false;
            st.insert(n);
            int ans =0;
            while(n>0){
                int r = n%10;
                ans += r*r;
                n /= 10;
            }
            n = ans;
        }
    }
};