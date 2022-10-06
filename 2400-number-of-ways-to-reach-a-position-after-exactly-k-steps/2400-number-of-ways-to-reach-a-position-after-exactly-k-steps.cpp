class Solution {
public:
    int dp[1002][3090];
    int f(int k, int pos, int dest)
    {
        if(k==0) return pos==dest;
        if(dp[k][pos]!=-1) return dp[k][pos];
        return dp[k][pos] = (f(k-1,pos+1,dest) + f(k-1,pos-1,dest))%1000000007;
    }
    int numberOfWays(int startPos, int endPos, int k) {
        memset(dp,-1,sizeof(dp));
        return f(k,startPos+1003,endPos+1003);
    }
};