class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        if(!n)
            return 0;
        int dp[n + 1][k + 1][2];
        memset(dp, 0, sizeof dp);
        for(int i = 0; i < n; i++) {
            for(int j = 1; j <= k; j++) {
                if(i == 0) {
                    dp[i][j][1] = -prices[i];
                    dp[i][j][0] = 0;
                } else {
                    dp[i][j][1] = max(dp[i - 1][j-1][0] - prices[i], dp[i - 1][j][1]);
                    dp[i][j][0] = max(dp[i - 1][j][1] + prices[i], dp[i - 1][j][0]);
                }
            }
        }
        return dp[n - 1][k][0];
    }
};