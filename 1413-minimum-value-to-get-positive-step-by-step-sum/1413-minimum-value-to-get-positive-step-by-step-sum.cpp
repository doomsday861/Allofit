class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int mini = INT_MAX;
        int ts =0;
        for(auto &x: nums){
            ts+=x;
            mini = min(ts,mini);
        }
        if(mini >=1) return 1;
        if(mini == 0) return 1;
        return (mini*-1) + 1;
    }
};