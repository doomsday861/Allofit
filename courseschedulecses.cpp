/**
 * course schedule
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
vector<vll>adj(100005);
bool vis[100005];
bool dfsvis[100005];
stack<ll> tp;
bool cyclecheck(ll src)
{
    vis[src] = 1;
    dfsvis[src] = 1;
    for(auto child : adj[src])
    {
        if(!vis[child])
        {
            if(cyclecheck(child))
                return 1;
        }
        if(dfsvis[child])
        {
            return 1;
        }
    }
    dfsvis[src] = 0;
    return 0;
}
void toporec(ll src)
{
    vis[src] = 1;
    for(auto child : adj[src])
    {
        if(!vis[child])
        {
            toporec(child);
        }
    }
    tp.push(src);
}
int main()
{
    run
    ll n,m;
    cin>>n>>m;
    memset(vis,0,sizeof(vis));
    for0(i,m)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);
    }
    for1(i,n)
    {
        if(!vis[i])
        {
            if(cyclecheck(i))
            {
                cout<<"IMPOSSIBLE";
                return 0;
            }
        }
    }
    memset(vis,0,sizeof(vis));
    for1(i,n)
    {
        if(!vis[i])
        {
            toporec(i);
        }
    }
    while(!tp.empty())
    {
        cout<<tp.top()<<" ";
        tp.pop();
    }

    return 0;
}
