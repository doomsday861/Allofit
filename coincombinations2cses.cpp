/**
 * coincombinations1cses
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
ll coinchange1(vll v,ll x)
{
	int mod = 1e9+7;
	vll cur(x+1,0);
	vll prev(x+1,0);
	prev[0] =1;
	for(int i=1;i<=v.size();i++)
	{
		for(int j=0;j<=x;j++)
		{
			if(j>=v[i-1])
			{
				cur[j] = (prev[j] + cur[j-v[i-1]])%mod;
			}
			else
				cur[j] = prev[j];
		}
		prev = cur;
	}
	return prev[x];
}
int main()
{
    run
 
 
  	ll n,x;
  	cin>>n>>x;
  	vll v(n);
  	for0(i,n) cin>>v[i];
  	cout<<coinchange1(v,x);
   
 
    return 0;
}