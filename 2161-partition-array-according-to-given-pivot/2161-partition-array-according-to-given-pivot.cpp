class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i=0,j=0,k=0;
        vector<int> ans(nums.size());
            for(int x : nums){
                if(x < pivot){
                    ans[i++] = x;
                }
            }
            j = i;
            for(int x : nums){
                if(x == pivot)
                ans[j++] = x;
            }
            k = j;
            for(int x : nums){
                if(x > pivot){
                    ans[k++] = x;
                }
            }
        
        return ans;
    }
};