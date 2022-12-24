class Solution {
public:
    int dp[5001][2];
    int dfs(int idx, bool hold, vector<int>&p)
    {
        if(idx>=p.size())
             return 0;
        if(dp[idx][hold]!=-1)
             return dp[idx][hold];
        if(hold)
        {
            return dp[idx][hold] = max(p[idx]+dfs(idx+2,0,p),dfs(idx+1,1,p));
        }
        if(!hold)
        {
            return dp[idx][hold] = max(dfs(idx+1,1,p)-p[idx],dfs(idx+1,0,p));
        }
        return -1;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return dfs(0,0,prices);
    }
};