class Solution {
public:
    long long dp[32][1002];
    long long solve(int n,int k, int target)
    {
        if(n==0)
        {
            if(target==0) return 1;
            return 0;
        }
        if(dp[n][target]!=-1) return dp[n][target];
        long long ans = 0;
        for(int i = 1; i<=min(target,k);i++)
        {
            ans = (ans + solve(n-1,k,target-i))%1000000007;
        }
        return dp[n][target] = ans;
        
    }
    int numRollsToTarget(int n, int k, int target) {
        memset(dp,-1,sizeof(dp));
        long long x = solve(n,k,target);
        return x;
    }
};