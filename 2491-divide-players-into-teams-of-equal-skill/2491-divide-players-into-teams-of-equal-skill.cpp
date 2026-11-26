class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n = skill.size();
        int team = n/2;
        int total = 0;
        for(int x : skill){
            total += x;
        }
        int skillPerTeam = total/team;
        int i=0,j=n-1;
        long long chem = 0;
        while(i<j){
            if(skill[i] + skill[j] != skillPerTeam){
                return -1;
            }
            else{
                chem += (skill[i]*skill[j]);
                i++;j--;
            }
        }
        return chem;
    }
};