/**
 * round trip 2 cses
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
stack<ll> ans;
bool cyclecheck(ll src, bool *vis,bool *dfsvis,vector<vll>&adj)
{
    vis[src] = 1;
    dfsvis[src] = 1;
    ans.push(src);
    for(auto child:adj[src])
    {
        if(!vis[child])
        {
            if(cyclecheck(child,vis,dfsvis,adj))
                return 1;
        }
        else
        {
            if(dfsvis[child])
            {
                ans.push(child);
                return 1;
            }
        }
    }
    dfsvis[src] = 0;
    ans.pop();
    return 0;
}
int main()
{
    run
ll n,m;
cin>>n>>m;
vector<vll>adj(n+1);
for0(i,m)
{
    ll x,y;
    cin>>x>>y;
    adj[x].pb(y);
}
bool vis[n+1];
memset(vis,0,sizeof(vis));
bool dfsvis[n+1];
memset(dfsvis,0,sizeof(dfsvis));
for1(i,n)
{
    if(!vis[i])
    {
        if(cyclecheck(i,vis,dfsvis,adj))
        {
            ll topmost = ans.top();
            vll val;
            val.pb(ans.top());
            ans.pop();
            while(!ans.empty())
            {
                val.pb(ans.top());
                if(ans.top()==topmost)
                {
                    reverse(bend(val));
                     cout<<val.size()<<endl;
                     for(auto x:val)
                     cout<<x<<" ";  
                     return 0; 
                }
                ans.pop();
            }
            return 0;
        }
            
    }
}
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
