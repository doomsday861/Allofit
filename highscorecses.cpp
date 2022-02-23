/**
 * HIGH SCORE CSES (BELLMAN FORD)
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
const ll INF = 1e17;
const ll NINF = INF*(-1);
using namespace std;
ll m,n;
struct edge
{
    ll a,b,c;
};
vector<edge>adj;
vll cost;
void solve()
{
    for1(i,n-1)
    {
        for(auto x:adj)
        {
            ll u = x.a;
            ll v = x.b;
            ll c = x.c;
            if(cost[u]==INF)
            {
                continue;
            }
            else
            {
                cost[v] = min(cost[v],cost[u]+c);
                cost[v] = max(cost[v],NINF);
            }
        }
    }
    for1(i,n-1)
    {
        for(auto x:adj)
        {
            ll u = x.a;
            ll v = x.b;
            ll c = x.c;
            if(cost[u]==INF)
            {
                continue;
            }
            cost[v] = max(cost[v],NINF);
            if(cost[u]+c < cost[v])
            {
                cost[v] = NINF;
            }
        }
    }
}
int main()
{
    run;
    cin>>n>>m;
    adj.resize(n+1);
    cost.resize(n+1);
    for0(i,m)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        adj[i].a = a;
        adj[i].b = b;
        adj[i].c = c*-1;
    }
    for(ll i =2;i<=n;i++)
    {
        cost[i] = INF;
    }
   solve();
   if(cost[n] == NINF)
   {
    cout<<-1;
    return 0;
   }
   else
    cout<<cost[n]*-1;

    return 0;
}   