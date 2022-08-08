/**
 * 1702E 
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
// bool isccyle(ll src, vector<vll>&adj, vector<bool>&vis,vector<bool>&dfsvis)
// {
//     vis[src] = 1;
//     dfsvis[src] = 1;
//     for(ll child : adj[src])
//     {
//         if(!vis[child])
//         {
//             if(isccyle(child,adj,vis,dfsvis))
//                 return 1;
//         }
//         else if(dfsvis[child])
//             return 1;
//     }
//     dfsvis[src] =0;
//     return 0;
// }
bool bfs(ll src,vector<vll>&adj, ll *color,vector<bool>&vis)
{
    vis[src] = 1;
    color[src] = 1;
    queue<ll>q;
    q.push(src);
    while(!q.empty())
    {
        auto parent = q.front();
        q.pop();
        ll parentcolor = color[parent];
        for(auto child: adj[parent])
        {
            if(color[child]==-1)
            {
                q.push(child);
                color[child] = parentcolor^1;
            }
                if(color[child]==parentcolor)
                    return 1;
        }
    }
    return 0;
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vector<vll>adj(n+1);
    map<ll,ll>mp;
    mp.clear();
        bool f=0;
    for0(i,n)
    {
        ll x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
        mp[x]++;
        mp[y]++;
        if(mp[x]>2 or mp[y]>2)
            f=1;
    }
    if(f)
    {
        cout<<"NO"<<endl;
        continue;
    }
    vector<bool>vis(n+1,0);
    vector<bool>dfsvis(n+1,0);
    ll color[n+1];

    memset(color,-1,sizeof(color));
    for1(i,n)
    {
        if(color[i]==-1)
        {
            // if(isccyle(i,adj,vis,dfsvis))
            // {
            //     cout<<"NO"<<endl;
            //     f=1;
            //     break;
            // }
            if(bfs(i,adj,color,vis))
            {
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
    }
    if(!f)
        cout<<"YES"<<endl;
    
}

    return 0;
}
