class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans(grid[0].size());
        for(int i=0;i<grid[0].size();i++)
        {
            int currow =0;
            int curcol = i;
            while(currow < grid.size())
            {
                if(grid[currow][curcol]==1 and curcol+1 < grid[0].size() and grid[currow][curcol+1]==1)
                {
                    currow++;
                    curcol++;
                }
                else if(grid[currow][curcol]== -1 and curcol - 1 >=0 and grid[currow][curcol- 1]==-1)
                {
                    curcol--;
                    currow++;
                }
                else break;
            }
            if(currow == grid.size())
            {
                ans[i] = curcol;
            }
            else ans[i] = -1;
        }
        return ans;
    }
};
