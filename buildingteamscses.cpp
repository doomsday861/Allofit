/**
 * building teams cses
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll n, m;
vector<vector<ll>>edge(100009);
bool vis[100009];
vector<ll> ans(100009);
bool valid=0;
void init()
{
    for(ll i=1; i <=n;i++)
    vis[i] =0,ans[i] = -1;
}
void bfs(ll x)
{
    vis[x] = 1;
    ans[x] = 1;
    queue<ll>q;
    q.push(x);
    while(!q.empty())
    {
        ll cur = q.front();
        q.pop();
        for( auto i: edge[cur])
        {
            if(ans[i] ==-1)
            {
                ans[i] = 1 - ans[cur];
                q.push(i);
            }
            else if(ans[i] == ans[cur])
            {
                cout<<"IMPOSSIBLE";
                valid =1;
                return;
            }
        }
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin>>n>>m;
init();
vector<pair<ll,ll>> check(m);
for(ll i=0; i < m;i++)
{
    ll x,y;
    cin>>x>>y;
    edge[x].push_back(y);
    edge[y].push_back(x);

}
// for(ll i=1; i <=n;i++)
// {
//     for(ll j=0;j<edge[i].size();j++)
//     {
//         cout<<edge[i][j]<<" ";
//     }
//     cout<<endl;
// }
for(ll i=1; i<=n;i++)
{
    if(ans[i] ==-1)
        bfs(i);
    if (valid)
    {
        return 0;
    }
}

for(ll i=1; i <=n;i++)
{
    if(ans[i]==0)
    ans[i] =2;
    cout<<ans[i]<<" ";
}
    return 0;
}