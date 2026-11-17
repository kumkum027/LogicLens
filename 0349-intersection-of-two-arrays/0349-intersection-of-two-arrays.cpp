class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        unordered_set<int> result;
        for(auto x : nums1){
            st.insert(x);
        }
        for(auto x : nums2){
            if(st.find(x) != st.end()){
                result.insert(x);
            }
        }
        vector<int> ans(result.begin(),result.end());
        return ans;
    }
};