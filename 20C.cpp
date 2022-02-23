/**
 * 20C
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
#define INF 9e17
ll m,n;
vll d;
vll p;
vll path;
vector<vector<pair<ll,ll>>>adj;
void djikstra()
{
    d.resize(n+4);
    p.resize(n+4);
    for(ll i=0;i<=n+1;i++)
    {
        d[i]= INF;
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
    pq.push({0,1});
    d[1] =0;
    p[1] = -1;
    while(!pq.empty())
    {
        ll u = pq.top().se;
        pq.pop();
        for(auto e: adj[u])
        {
            ll v = e.fi;
            ll w = e.se;
            if(d[v] > d[u]+w)
            {
                d[v] = d[u]+w;
                pq.push({d[v],v});
                p[v] = u;
            }   
        } 
    }
    if(d[n]==INF)
    {
        cout<<-1;
        return;
    }
    for(ll v =n;v!=-1;v=p[v])
    {
        path.pb(v);
    }
    reverse(bend(path));
    for(auto x: path)
        cout<<x<<" ";
}

int main()
{
    run
    cin>>n>>m;
    adj.resize(n+1);
    while(m--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        adj[a].pb({b,c});
        adj[b].pb({a,c});
    }

   djikstra();

    return 0;
}