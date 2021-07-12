/**
 * round trip cses
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
ll sp, ep;
vector<vector<ll>> edge(100009);
bool vis[100009];
ll parent[100009];
void init()
{
    for (ll i = 1; i <=n; i++)
        vis[i] = 0;
}
bool dfs(ll x, ll p)
{
    vis[x] = 1;
    parent[x] = p;
    for (auto v : edge[x])
    {
        if (v == p)
            continue;
        if (vis[v])
        {
            sp = v;
            ep = x;
            return true;
        }
        if (!vis[v])
            if (dfs(v, x))
                return true;
    }
    return false;
}
bool allvis()
{
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            //cout<<i<<endl;
            if (dfs(i, -1))
                return true;
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
//    init();
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    if (!allvis())
    {
        cout << "IMPOSSIBLE";
        return 0;
    }
    vector<ll> ans;
    ll f = ep;
    ans.push_back(ep);
    while (f != sp)
    {
       // cout<<f<<endl;
        if(f==-1)
        break;
        ans.push_back(parent[f]);
        f = parent[f];
    }
    ans.push_back(ep);
    cout << ans.size() << endl;
    for (auto x : ans)
        {
            if(x==-1)
        continue;
        cout << x << " ";
        }
    return 0;
}