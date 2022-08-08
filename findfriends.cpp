/**
 * find friends
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
  int solve(vector<vector<int>>& grid) {
      map<int,int>row;
        map<int,int>col;
        for(int i=0; i< grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int cnt=0;
        for(int i=0; i < grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    if(row[i]>=2 or col[j]>=2)
                        cnt++;
                }
            }
        }
        return cnt;
        
    }
int main()
{
    run
    int m,n;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n));
    for0(i,m)
    {
        for0(j,n)
        {
            cin>>grid[i][j];
        }
    }
    cout<<solve(grid);

    return 0;
}
