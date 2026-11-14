class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        deque<int> maxi;
        deque<int> mini;
        int i = 0;
        int ans = 0;
        for(int j = 0;j<nums.size();j++){
            while(!maxi.empty() && nums[maxi.back()] <= nums[j]){
                maxi.pop_back();
            }
            while(!mini.empty() && nums[mini.back()] >= nums[j]){
                mini.pop_back();
            }
            maxi.push_back(j);
            mini.push_back(j);
            while(nums[maxi.front()]-nums[mini.front()] > limit){
                if(maxi.front() == i){
                    maxi.pop_front();
                }
                if(mini.front() == i){
                    mini.pop_front();
                }
                i++;
            }
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};