/**
 * try
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
vector<ll> v(33,0);
vector<vector<ll>>f(200005);
void init()
{
	f[0].resize(20);
 for(ll j=1;j<200005;j++)
	{
		f[j].resize(20);
		for(ll i=0;i<=18;i++)
		{
		if(j&(1<<(i-1)))
			f[j][i] = f[j-1][i]+1;
		else
			f[j][i] = f[j-1][i];
		}
	}
}
void setter(ll n)
{
	for(ll i=0; i<=18;i++)
	{
		if(n&(1<<(i-1)))
			v[i]++;
	}
}
bool remover(ll n, ll x)
{
	if(n&(1<<(x-1)))
		return false;
	return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
init();
 testcase
  {

  	ll l,r;
  	cin>>l >> r;
  	ll count=0;
  	// for(ll i=l;i<=r;i++)
  	// {
  	// 	setter(i);
  	// }
  	 ll maxsetbit =0;
  	vector<ll>bruh(20);
  	for(ll i=0; i <=18;i++)
  	{
  		bruh[i] = f[r][i] - f[l-1][i];
  		maxsetbit = max(maxsetbit,bruh[i]);
  	}
  	ll answer = (r-l)-maxsetbit;
  	cout<<answer+1<<endl;

  	// int maxi=0;
  	// for(ll i=0; i <=18;i++)
  	// {
  	// 	if(v[i]>maxi)
  	// 		{
  	// 			maxsetbit = i;
  	// 			maxi=v[i];
  	// 		}
  	// }
  	// ll ans=0;
  	// for(ll i=l;i<=r;i++)
  	// {
  	// 	if(remover(i,maxsetbit))
  	// 		ans++;
  	// }
  	// for(ll i=0;i<=5;i++)
  	// {
  	// 	cout<<i<<"= ";
  	// 	for(ll j=0;j<=18;j++)
  	// 	{
  	// 		cout<<f[i][j]<<" ";
  	// 	}
  	// 	cout<<endl;
  	// }
  	// for(auto x:v)
  	// 	cout<<x<<" ";
  	// cout<<endl;
  	// cout<<maxsetbit<<endl;
  	// cout<<ans<<endl;
}
    return 0;
}