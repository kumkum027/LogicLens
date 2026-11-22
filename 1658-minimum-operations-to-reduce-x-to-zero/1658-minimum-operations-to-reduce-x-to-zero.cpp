class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = 0;int left=0;
        int maxlen = -1;
        for(int num : nums){
            totalSum += num;
        }
        int target = totalSum - x;
        int sum =0;
        for (int right=0;right<nums.size();right++){
            sum += nums[right];
            while(left<=right && sum > target){
                sum -= nums[left];
                left++;
            }
            if(sum == target) maxlen = max(maxlen,right-left+1);
        }
        return (maxlen == -1)?-1:nums.size()-maxlen;
    }
};