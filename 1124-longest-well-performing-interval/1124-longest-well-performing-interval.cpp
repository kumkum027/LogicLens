class Solution {
public:
    int longestWPI(vector<int>& hours) {
        unordered_map<int,int> mp;
        mp[0] = -1;
        int sum =0;
        int maxlen = 0 ;
        for(int i=0;i<hours.size();i++){
            if(hours[i] > 8) sum++;
            else sum--;
            if(sum > 0) maxlen = i+1;
            else if(mp.find(sum-1) != mp.end()){
            maxlen = max(maxlen,i - mp[sum-1]);
           }
           if(mp.find(sum) == mp.end()){
            mp[sum] = i;
           }
        }
        return maxlen;
    }
};