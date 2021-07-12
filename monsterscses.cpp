/**
 * MONSTER CSES 
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll grid[1009][1009];
ll n, m;
vector<pair<pair<ll, ll>, ll>> monster;
pair<ll, ll> start;
pair<ll, ll> ender;
map<pair<ll, ll>, pair<ll, ll>> parent;
ll row[] = {0, 0, -1, 1};
ll col[] = {-1, 1, 0, 0};
bool isval(ll x, ll y, ll timer)
{
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] > timer);
}
bool isescape(ll x, ll y, ll timer)
{
    if (isval(x, y, timer) && (x == 0 || x == n - 1 || y == 0 || y == m - 1))
        return true;

    return false;
}
void monsterbfs()
{
    queue<pair<pair<ll, ll>, ll>> q;
    for (auto m : monster)
    {
        q.push(m);
    }
    while (!q.empty())
    {
        ll curx = q.front().first.first;
        ll cury = q.front().first.second;
        ll timer = q.front().second;
        timer++;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll tx = curx + row[i];
            ll ty = cury + col[i];
            if (isval(tx, ty, timer))
            {
                grid[tx][ty] = timer;
                q.push({{tx, ty}, timer});
            }
        }
    }
}
bool isescape()
{
    queue<pair<pair<ll, ll>, ll>> q;
    q.push({start, 0});
    parent[start] = {-1, -1};
    while (!q.empty())
    {
        ll curx = q.front().first.first;
        ll cury = q.front().first.second;
        ll timer = q.front().second;
        timer++;
        q.pop();
        for (ll i = 0; i < 4; i++)
        {
            ll tx = curx + row[i];
            ll ty = cury + col[i];
            if (isval(tx, ty, timer))
            {
                if (isescape(tx, ty, timer))
                {
                    parent[{tx, ty}] = {curx, cury};
                    ender = {tx, ty};
                    return true;
                }
                parent[{tx, ty}] = {curx, cury};
                q.push({{tx, ty}, timer});
                grid[tx][ty] = timer;
            }
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c == '#')
            {
                grid[i][j] = 0;
            }
            else if (c == 'A')
            {
                grid[i][j] = 0;
                start = {i, j};
            }
            else if (c == 'M')
            {
                grid[i][j] = 0;
                monster.push_back({{i, j}, 0});
            }
            else
            {
                grid[i][j] = LLONG_MAX;
            }
        }
    }
    if((n==1 && m==1)||(start.first==0 && start.second ==m-1)||(start.first==n-1 && start.second==n-1))
    {
        cout<<"YES\n0";
        return 0;
    }
    monsterbfs();
    // for(ll i=0; i < n;i++)
    // {
    //     for(ll j=0; j <m;j++)
    //     cout<<grid[i][j]<<" ";
    //     cout<<endl;
    // }
    if (!isescape())
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    vector<char> ans;
    pair<ll, ll> starting = ender;
    pair<ll, ll> starting1 = parent[ender];
    pair<ll, ll> laster = {-1, -1};
    //cout<<start.first<<" "<<start.second<<" "<<starting.first<<" "<<starting.second;
    while (starting != laster)
    {
        if ((starting.second - starting1.second) == 1 and (starting.first - starting1.first) == 0)
        {
            ans.push_back('R');
        }
        if ((starting.second - starting1.second) == -1 and (starting.first - starting1.first) == 0)
        {
            ans.push_back('L');
        }
        if ((starting.second - starting1.second) == 0 and (starting.first - starting1.first) == 1)
        {
            ans.push_back('D');
        }
        if ((starting.second - starting1.second) == 0 and (starting.first - starting1.first) == -1)
        {
            ans.push_back('U');
        }
        starting = parent[starting];
        starting1 = parent[starting];
    }
    cout << ans.size() << endl;
    reverse(ans.begin(), ans.end());
    for(auto x:ans)
    cout<<x;
    return 0;
}