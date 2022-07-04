/**
 * number of closed islands
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
 bool vis[105][105]; // visited array to make sure no cell is visited more than once.
    int n=0;
    int m =0;
    bool isval(int i, int j,vector<vector<char>>&grid)
    {
        return (i>=0 and i<n and j>=0 and j <m and grid[i][j]=='$' and !vis[i][j]); // CONDITION TO CHECK WHETHER INDICES (i,j) are valid indices or not
    }
    void bfs(vector<vector<char>>&grid, int i , int j) //standard BFS on Grid Procedure.
    {
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j] = 1;
        int rowx[] = {-1,0,1,0};
        int colx[] = {0,1,0,-1};
        while(!q.empty())
        {
            auto cur = q.front();
            q.pop();
            for(int i=0; i < 4;i++)
            {
                int x = cur.first + rowx[i];
                int y = cur.second + colx[i];
                if(isval(x,y,grid))
                {
                    q.push({x,y});
                    vis[x][y] = 1;
                }
            }
        }
    }
    int solve(vector<vector<char>>& grid) {
        memset(vis,0,sizeof(vis));
        int boundary =0;
        int total =0;
        n = grid.size();
        m = grid[0].size();
        for(int i=0; i < n;i++) // FIRST CHECK TO ELIMINATE ALL THE BOUNDARY CONNECTED '$'s
        {
            for(int j=0; j < m; j++)
            {
                if(grid[i][j] == '$' and vis[i][j]==0 and (i==0 or i==n-1 or j==0 or j==m-1))
                {
                    bfs(grid,i,j);
                    boundary++;
                }
        }
        }
        for(int i=0; i < n; i++) // SECOND CHECK TO COUNT ALL THE REMAINING NEEDED '$' THAT CAN BE RECOVERED
        {
            for(int j=0; j < m;j++)
            {
                if(grid[i][j] =='$' and !vis[i][j])
                {
                    bfs(grid,i,j);
                    total++;
                }
            }
        }
        return total; // TOTAL INTERNAL COUNT OF $.
    }
int main()
{
    run
    ll n,m;
    cin>>n>>m;
    vector<vector<char>>grid(n);
    for0(i,n)
    {
        grid[i].resize(m);
        for0(j,m)
        {
            cin>>grid[i][j];
        }
    }
    cout<<solve(grid)<<endl;

    return 0;
}
