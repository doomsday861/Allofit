/**
 * 195B
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
    vll ans(n+1,0);
    
    ll l = (m+1)/2;
   	ll r = (m+1)/2;
   	bool f=0;
   	for(ll i=1;i<=m && i<=n;i++)
   	{
   		if(!f)
   		{
   			ans[i] = l;
   			l--;
   			f=1;

   			if(m&1 && i==1)
   			{
   				i++;
   				ans[i] =l;
   				l--;
   				r++;
   			}
   			else if(i==1)
   				r++;
   			continue;
   		}
   		else
   		{
   			ans[i] = r;
   			r++;
   			f=0;
   		}
   	}
   	if(n>m)
   	{
   		for(ll i=m+1;i<=n;i++)
   		{
   			ans[i] = ans[i-m];
   		}
   	}
   	for1(i,n)
   	cout<<ans[i]<<" ";

    return 0;
}