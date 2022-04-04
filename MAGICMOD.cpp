/**
 * MAGICMOD
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
ll check(vll v, ll k)
{
	ll sum=0;
	unordered_set<ll> st;
	for0(i,v.size())
	{
		v[i] = v[i]%k;
		sum+=v[i];
		st.insert(v[i]);
	}
	ll n = v.size();
	if(sum==(n*(n+1))/2 && st.size()==n)
		return 0;
	if(st.size()<n)
		return 1;
	if(st.size()==n)
	{
		return -1;
	}
	
}
int main()
{
    run

    
 testcase
  {
  	ll n;
  	cin>>n;
  	vll v(n);
  	for0(i,n) cin>>v[i];
  	
}
   

    return 0;
}