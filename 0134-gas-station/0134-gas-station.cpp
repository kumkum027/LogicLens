class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int kami = 0;
        int bal = 0;
        int start = 0;
        for(int i=0;i<n;i++){
            bal += gas[i] - cost[i];
            if(bal < 0){
                kami += bal;
                bal = 0;
                start = i+1;
            }
        }
        if(kami + bal >= 0){
            return start;
        }else{
            return -1;
        }
    }
};