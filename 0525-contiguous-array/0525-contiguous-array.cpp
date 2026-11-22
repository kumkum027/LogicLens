class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int maxlen = 0;
        int sum =0;
        mp[0] = -1;
        for(int i=0;i<n;i++){
            if(nums[i] == 0) sum--;
            else sum++;
            if(mp.find(sum) != mp.end()){
                maxlen = max(maxlen,i - mp[sum]);
            }else{
                mp[sum] = i;
            }
        }
        return maxlen;
    }
};