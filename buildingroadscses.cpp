/**
 * BUILDING ROADS CSES
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll n, m;
vector<bool> vis(100009);
vector<ll> city;
vector<vector<ll>> edge(100009);
void init()
{
    for(ll i=0 ; i <=n;i++)
    {
        vis[i] =0;
 //       city[i] = i+1;
    }
}
void dfs(ll x)
{
    vis[x] = 1;
   for(auto v: edge[x])
   {
       if(!vis[v])
        dfs(v);
   }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin>>n>>m;
init();
for(ll i=0 ; i <m;i++)
{
    ll x,y;
    cin>>x>>y;
    edge[x].push_back(y);
    edge[y].push_back(x);
}
ll ans =0;
for(ll i=1 ; i <=n;i++)
{
    if(!vis[i])
    {
        ans++;
        dfs(i);
        city.push_back(i);
    }
}
cout<<ans-1<<endl;
if(ans>1)
{
    int f = city[0];
    for(ll i=1 ; i<ans;i++)
    {
        ll l = city[i];
        cout<<f<<" "<<l<<endl;
        f = l;
    }
}
return 0; 
}