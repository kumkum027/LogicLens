class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int count =0;
        int odd = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] % 2 != 0) odd++;
            count+= mp[odd-k];
            mp[odd]++;
        }
        return count;
    }
};