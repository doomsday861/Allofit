/**
 * SHORTEST ROUTES 1 CSES
**/
#include <bits/stdc++.h>
#define ll long long
#define testcase \
  ll t;          \
  cin >> t;      \
  while (t--)
using namespace std;
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
  ll n, m;
  cin >> n >> m;
  vector<vector<pair<ll, ll>>> edge(n + 1);
  vector<ll> dist(n + 1, LLONG_MAX);
  for (ll i = 0; i < m; i++)
  {
    ll a, b, c;
    cin >> a >> b >> c;
    edge[a].push_back({b, c});
//    edge[b].push_back({a, c});
  }
  set<ll> s;
  s.insert(1);
  dist[1] = 0;
  while (!s.empty())
  {
    auto x = *(s.begin());
    s.erase(x);
    for (auto it : edge[x])
    {
      if (dist[it.first] > dist[x] + it.second)
      {
        dist[it.first] = dist[x] + it.second;
        s.insert(it.first);
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    cout << dist[i] << " ";
  }

  return 0;
}