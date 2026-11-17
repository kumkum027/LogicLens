class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st;
        //unordered_set<int> result;
        vector<int> ans;
        for(auto x : nums1){
            st.insert(x);
        }
        // for(auto x : nums2){
        //     if(st.find(x) != st.end()){
        //         result.insert(x);
        //     }
        // }
        for(auto x : nums2){
            if(st.erase(x)){
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};