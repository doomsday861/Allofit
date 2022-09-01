class Solution {
public:
    int dp[10001];
    vector<int>store()
    {
        vector<int>sq;
        for(int i=1;i<=101;i++) sq.push_back(i*i);
        return sq;
    }
    int solve(int n,vector<int>&sq)
    {
        if(n==0) return 0;
        if(n<0) return INT_MAX-1000;
        if(dp[n]!=-1)
            return dp[n];
        int i=0;
        int ans = INT_MAX;
        while(sq[i]<=n)
        {
            ans = min(ans, 1 + solve(n-sq[i],sq));
            i++;
        }
        return dp[n] = ans;
    }
    int numSquares(int n) {
        vector<int>sq = store();
        memset(dp,-1,sizeof(dp));
        return solve(n,sq);
    }
};