class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        deque<int> maxi;
        vector<int> ans;
        int n = arr.size();
        for(int i=0;i<k;i++){
            while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
                maxi.pop_back();
            }
            maxi.push_back(i);
        }
        ans.push_back(arr[maxi.front()]);
        for(int i=k;i<n;i++){
            while(!maxi.empty() && maxi.front() <= i-k){
                maxi.pop_front();
            }
            while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
                maxi.pop_back();
            }
            maxi.push_back(i);
            ans.push_back(arr[maxi.front()]);
        }
        return ans;
    }
};