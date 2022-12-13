class Solution {
public:
    bool isvalid(int i, int j, int n, int m)
    {
        return( i >=0 and j>=0 and i <n and j < m);
    }
    int dp[101][101];
    int solve(int i, int j, vector<vector<int>>&matrix)
    {
        if(!isvalid(i,j,matrix.size(),matrix[0].size())) return INT_MAX-1000;
        if(i== matrix.size()-1)
        {
            return matrix[i][j];
        }
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j] = min({solve(i+1,j-1,matrix),solve(i+1,j,matrix),solve(i+1,j+1,matrix)}) + matrix[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        memset(dp,-1,sizeof(dp));
        for(int i =0; i < matrix[0].size();i++)
        {
            ans = min(ans,solve(0,i,matrix));
        }
        return ans;
    }
};