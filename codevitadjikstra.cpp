
#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
int dist[25][25];
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
            dist[i][j] = INT_MAX;

    int dx[] = {-1, 0, 1, 0,1, -1, 1, -1};
    int dy[] = {0, 1, 0, -1,1, 1, -1, -1};

    set<cell> st;

    st.insert(cell(x, y, 0));

    dist[x][y] = grid[x][y];

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

            if (dist[x][y] > dist[k.x][k.y] + grid[x][y])
            {
                if (dist[x][y] != INT_MAX)
                    st.erase(st.find(cell(x, y, dist[x][y])));
                dist[x][y] = dist[k.x][k.y] + grid[x][y];
                st.insert(cell(x, y, dist[x][y]));
            }
        }
    }

        return INT_MAX;
}

int main()
{
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
                ans = min(ans,dist[i][j]);
        }
    }
    cout<<ans<<endl;
    return 0;
}

