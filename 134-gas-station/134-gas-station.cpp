class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total =0;
        int fuel =0;
        int idx =0;
        int n = gas.size();
        for(int i=0;i<n;i++)
        {
            total += (gas[i]-cost[i]);
            if(fuel < 0)
            {
                fuel =0;
                idx = i;
            }
            fuel += (gas[i]-cost[i]);   
        }
        if(total>=0) return idx;
        return -1;
    }
};