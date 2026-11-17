class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        multiset<int> st;
        vector<int> ans;
        for(int x : nums1){
            st.insert(x);
        }
        for(auto x : nums2){
            auto it = st.find(x);
            if(it != st.end()){
                ans.push_back(x);
                st.erase(it);
            }
        }
        return ans;
    }
};