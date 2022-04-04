/**
 * bookshop cses
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
// ll t[1005][100006];
// ll knaprec(vll price,vll value,ll W,ll n)
// {
// 	if(n==0 || W==0)
// 		return 0;
// 	else if(price[n-1]<=W)
// 		return (max(value[n-1]+knaprec(price,value,W-price[n-1],n-1),
// 			knaprec(price,value,W,n-1)));
// 	else
// 		return knaprec(price,value,W,n-1);
// }
// ll knapmemoise(vll price,vll value,ll W,ll n)
// {
 
// 	if(n==0 || W==0)
// 		return 0;
// 	if(t[n][W]!=-1)
// 	{
// 		return t[n][W];
// 	}
// 	else if(price[n-1]<=W)
// 		return t[n][W] = (max(value[n-1]+knapmemoise(price,value,W-price[n-1],n-1),
// 			knapmemoise(price,value,W,n-1)));
// 	else
// 		return t[n][W] = knapmemoise(price,value,W,n-1);
// }
ll knapdp(vll price, vll value, ll W, ll n)
{
	//vector<vector<ll>>dp(n+1,vector<ll>(W+1,0));
	vector<ll> prev(W+1,0);
	vector<ll> cur(W+1,0);
	for(ll i=1;i<=n;i++)
	{
		for(ll j=0;j<=W;j++)
		{
			if(j-price[i-1]>=0)
			cur[j] = max(value[i-1]+prev[j-price[i-1]],cur[j]);
			else
				cur[j] = prev[j];

		}
		prev = cur;
	}
	return prev[W];
}
int main()
{
    run
 
    ll n,W;
    cin>>n>>W;
    vll weight(n);
    vll value(n);
    for0(i,n)
    cin>>weight[i];
    for0(i,n)
    cin>>value[i];

    cout<<knapdp(weight,value,W,n)<<endl;
 
    // for(int i=0;i<=n;i++)
   	// {
   	// 	for(int j=0; j<=W;j++)
   	// 		cout<<dp[i][j]<<" ";
   	// 	cout<<endl;
   	// }
 
    return 0;
}