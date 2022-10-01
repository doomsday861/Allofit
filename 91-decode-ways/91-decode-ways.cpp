class Solution {
public:
    int dp[120];
    int solve(string &s, int idx, int n)
    {
       if(idx==n)
       {
           return 1;
       }
        if(s[idx]=='0')
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int res = solve(s,idx+1,n);
        if(idx+1<n and ((s[idx]=='1' or (s[idx]=='2') and s[idx+1]<='6')))
            res += solve(s,idx+2,n);
        
        return dp[idx] = res;
    }
    int numDecodings(string s) {
        memset(dp,-1,sizeof(dp));
     return solve(s,0,s.length());
    }
};