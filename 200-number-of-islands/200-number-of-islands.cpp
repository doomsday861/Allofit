class Solution {
public:
//DFS WORKS
// BFS GIVES TLE. (NO REASON)
    int m,n;
    bool isval(int x, int y)
    {
        
        return (x>=0 and y>=0 and x<n and y<m);
    }
    void bfs(vector<vector<char>>&grid, int srcx, int srcy)
    {
        stack<pair<int,int>>q;
        q.push({srcx,srcy});
        int row[] = {-1,0,0,1};
        int col[] = {0,-1,1,0};
        while(!q.empty())
        {
                auto cur = q.top();
                q.pop();
                grid[cur.first][cur.second] = '0';

                for(int i=0; i <4;i++)
                {
                    int r = cur.first + row[i];
                    int c = cur.second + col[i];
                    if(isval(r,c) and grid[r][c]=='1')
                    {
                        q.push({r,c});
                    }
                }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int cnt=0;
        for(int i=0; i < n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    bfs(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};