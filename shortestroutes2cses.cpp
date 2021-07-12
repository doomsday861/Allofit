/**
 * SHORTEST ROUTES 2 CSES
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define maxi 10000000000009
// struct point
// {
//   ll dis;
//   ll id;
// };
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m, q;
    cin >> n >> m >> q;
    ll dist[n + 1][n + 1];
    for (ll i = 0; i <= n; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            dist[i][j] = maxi;
        }
    }
    vector<vector<pair<ll, ll>>> edge(n + 1);
    for (ll i = 0; i < m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        edge[a].push_back({b, c});
        edge[b].push_back({a, c});
        dist[a][b] = min(dist[a][b], c);
        dist[b][a] = min(dist[b][a], c);
    }
    // for (ll i = 0; i <= n; i++)
    // {
    //     for (ll j = 0; j <= n; j++)
    //     {
    //         cout << dist[i][j] << " ";
    //         //  cout << endl;
    //     }
    //     cout << endl;
    // }

    for (ll k = 1; k <= n; k++)
    {
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        if (min(dist[a][b], dist[b][a]) == maxi)
        {
            cout << -1 << endl;
            continue;
        }
        cout << min(dist[a][b], dist[b][a]) << endl;
    }
}