class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxWater = 0;
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int width = j-i;
        //         int ht = min(height[i],height[j]);
        //         int currW = width * ht;
        //         maxWater = max(maxWater,currW);
        //     }
        // }
        // return maxWater;
        int lp=0,rp=height.size()-1;
        int maxW=0;
        while(lp<rp){
            int w = rp-lp;
            int ht = min(height[lp],height[rp]);
            int currW = w * ht;
            maxW = max(maxW,currW);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxW;

    }
};