/**
 * PROBLEM E
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
int ROW;
int COL;
int x;
int y;
struct cell
{
    int x, y;
    int distance;
    cell(int x, int y, int distance) :
        x(x), y(y), distance(distance) {}
};
int dis[25][25];
bool operator<(const cell& a, const cell& b)
{
    if (a.distance == b.distance)
    {
        if (a.x != b.x)
            return (a.x < b.x);
        else
            return (a.y < b.y);
    }
    return (a.distance < b.distance);
}

bool isInsideGrid(int i, int j)
{
    return (i >= 0 && i < ROW && j >= 0 && j < COL);
}

int shortest(vector<vector<int>>&grid, int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            dis[i][j] = INT_MAX;

    int dx[] = {-1, 0, 1, 0,1, -1, 1, -1};
    int dy[] = {0, 1, 0, -1,1, 1, -1, -1};

    set<cell> st;

    st.insert(cell(x, y, 0));

    dis[x][y] = grid[x][y];

    while (!st.empty())
    {
        cell k = *st.begin();
        st.erase(st.begin());

        for (int i = 0; i < 8; i++)
        {
            int x = k.x + dx[i];
            int y = k.y + dy[i];

            if (!isInsideGrid(x, y))
                continue;

            if (dis[x][y] > dis[k.x][k.y] + grid[x][y])
            {
                if (dis[x][y] != INT_MAX)
                    st.erase(st.find(cell(x, y, dis[x][y])));
                dis[x][y] = dis[k.x][k.y] + grid[x][y];
                st.insert(cell(x, y, dis[x][y]));
            }
        }
    }

        return INT_MAX;
}

int main()
{
    run
   cin>>ROW>>COL;
   
   vector<vector<int>>grid(ROW);
   for(int i=0;i<ROW;i++)
   {
    grid[i].resize(COL);
    for(int j=0;j<COL;j++)
    {
        cin>>grid[i][j];
        if(grid[i][j]==0)
            {
                x = i;
                y = j;
            }
            
    }
   }
   
    int ans = shortest(grid, ROW, COL);
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<COL;j++)
        {
            if(i==0 || j==0 || i==ROW-1 ||j==COL-1)
                ans = min(ans,dis[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}

