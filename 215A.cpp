/**
 * 215A
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
cin>>n;
vll g1(n);
for0(i,n)
{
	cin>>g1[i];
}
cin>>m;
vll g2(m);
for0(i,m)
{
	cin>>g2[i];
}
ll maxi = INT_MIN;
for0(i,m)
{
	for0(j,n)
	{
		if((g2[i]%g1[j]) == 0)
			maxi = max(maxi,g2[i]/g1[j]);
	}
}
ll ans=0;
for0(i,m)
{
	for0(j,n)
	{
		if((g2[i]%g1[j]) == 0)
			if((g2[i]/g1[j]) == maxi)
				ans++;
	}
}
cout<<ans;

    return 0;
}