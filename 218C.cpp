/**
 * 218Cs
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
vector<vll> adj(10001);
bool vis[10001];
ll m;
ll x[1001];
ll y[1001];
void bfs(ll s)
{
	vis[s] = 1;
	for1(i,m)
	{
		if(!vis[i] &&(x[i]==x[s] || y[i]==y[s]))
		{
			bfs(i);
		}
	}
}
int main()
{
    run

    
cin>>m;
for1(i,m)
{
	cin>>x[i]>>y[i];
}
ll ans=-1;
   for1(i,m)
   {
   	if(!vis[i])
   	{
   		ans++;
   		bfs(i);
   	}
   }
   cout<<ans;

    return 0;
}