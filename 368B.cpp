/**
 * 368B
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
using namespace std;
int main()
{
    run

ll n,m;
cin>>n>>m;
unordered_set<ll> st;
vector<ll> ans(n);
vector<ll> v(n);
for0(i,n)
{
	cin>>v[i];
}

for(ll i=n-1;i>=0;i--)
{
	st.insert(v[i]);
	ans[i] = st.size();
}
for0(i,m)
{
	ll x;
	cin>>x;
	cout<<ans[x-1]<<endl;
}

    return 0;
}