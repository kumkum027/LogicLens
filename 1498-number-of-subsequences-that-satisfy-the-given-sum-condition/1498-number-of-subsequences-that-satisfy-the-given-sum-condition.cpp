class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mod = 1e9 + 7;
        vector<int> power(n);
        power[0] = 1;
        for(int i=1;i<n;i++){
            power[i] = (power[i-1]*2LL)%mod;
        }
        int i=0,j=n-1;
        int count = 0;
        while(i<=j){
            if(nums[i]+nums[j]<=target){
                count = (count + power[j-i])%mod;
                i++;
            }
            else j--;
        }
        return count;
    }
};