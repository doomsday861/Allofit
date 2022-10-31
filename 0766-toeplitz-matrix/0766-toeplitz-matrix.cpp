class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool ans = 1;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])
                {
                    ans = 0;
                    break;
                }
            }
            if(!ans) break;
        }
        return ans;
    }
};