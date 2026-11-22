class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int> mp;
        long long sum = 0;
        int len = 0;
        mp[0] = -1;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            long long rem = (k==0)? sum:((sum % k)+k)%k;
            if(mp.find(rem) != mp.end()){
                len = i - mp[rem];
                if(len >= 2) return true;
            }
            else mp[rem] = i;
        }
        return false;
    }
};