/**
 * road preparations cses
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
int main()
{
    run
ll n,m;
cin>>n>>m;
vector<vector<pair<ll,ll>>>adj(n+1);
for0(i,m)
{
    ll a,b,w;
    cin>>a>>b>>w;
    adj[a].pb({b,w});
    adj[b].pb({a,w});
}
ll key[n+1],parent[n+1];
bool vis[n+1];
for0(i,n+1)
{
    vis[i] = 0;
    key[i] = INT_MAX;
    parent[i] = -1;
}
key[0] =0 ;
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
pq.push({0,0});
//key, index
for0(i,n-1)
{
    ll u = pq.top().second;
    pq.pop();
    vis[u] = 1;
    for(auto child:adj[u])
    {
        ll to = child.fi;
        ll w = child.se;
        if(!vis[to] and w < key[to])
        {
            parent[to] = u;
            pq.push({key[to],to});
            key[to] = w;
        }
    }
}
for(auto x:key)
cout<<x<<" ";

    return 0;
}
