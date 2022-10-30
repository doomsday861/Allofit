class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        
        queue<pair<pair<int,int>,pair<int,int>>>q; //(len,k,(i,j))
        q.push({{0,k},{0,0}});
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,(vector<int>(m,-1)));
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            int i = cur.second.first;
            int j = cur.second.second;
            int curlen = cur.first.first;
            int curk = cur.first.second;
         //   cout<<i<<" "<<j<<" "<<curk<<" "<<curlen<<endl;
            if(i>=n or i < 0 or j>=m or j < 0) continue;
            if(i==n-1 and j==m-1) return curlen;
            if(grid[i][j]==1 and curk<=0) continue;
            if(grid[i][j]==1) curk--;
            if(vis[i][j]!=-1 and vis[i][j] >= curk)continue;
            vis[i][j] = curk;
            q.push({{curlen+1,curk},{i+1,j}});
            q.push({{curlen+1,curk},{i-1,j}});
            q.push({{curlen+1,curk},{i,j-1}});
            q.push({{curlen+1,curk},{i,j+1}});
        }
        return -1;
    }
};