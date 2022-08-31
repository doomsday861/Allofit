class Solution {
public:
    int bfs(int srcx, int srcy, int x, int y, vector<vector<int>>&f)
    {
        int n = f.size();
        int m = f[0].size();
        bool vis[n][m];
        if(srcx==x and srcy==y)
            return 0;
        memset(vis,0,sizeof(vis));
        queue<pair<int,int>>q;
        q.push({srcx,srcy});
        vis[srcx][srcy] = 1;
        int lvl = 0;
        int row[] = {-1,1,0,0};
        int col[]= {0,0,-1,1};
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0;i<sz;i++)
            {
                auto cur = q.front();
                q.pop();
                for(int j=0;j<4;j++)
                {
                    int curx = cur.first+row[j];
                    int cury = cur.second+col[j];
                    if(curx>=n or cury>=m or curx<0 or cury<0 or vis[curx][cury]==1 or f[curx][cury]==0) continue;
                    if(curx==x and cury==y) return lvl+1;
                    vis[curx][cury] = 1;
                    q.push({curx,cury});
                }
            }
            lvl++;
        }
        return -1;
    }
    int cutOffTree(vector<vector<int>>& forest) {
        if(forest[0][0]==0)
            return -1;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        for(int i=0;i<forest.size();i++)
        {
            for(int j=0;j<forest[i].size();j++)
            {
                if(forest[i][j]>1)
                {
                    pq.push({forest[i][j],{i,j}});
                }
            }
        }
        int ans = bfs(0,0,pq.top().second.first,pq.top().second.second,forest);
        int curx = pq.top().second.first;
        int cury = pq.top().second.second;
        pq.pop();
        while(!pq.empty())
        {
        int dist = bfs(curx,cury,pq.top().second.first,pq.top().second.second,forest);
  //      cout<<dist<<endl;
        if(dist==-1)
            return dist;
            ans +=dist;
         curx = pq.top().second.first;
        cury = pq.top().second.second;
        pq.pop();
        }
        return ans;
    }
};