/**
 * 144A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{

	ll n;
	cin>>n;
	vector<ll>v(n);
	ll max =INT_MIN;
	ll min = INT_MAX;
	ll maxi =0;
	ll mini =0;
	ll ans=0;
	for0(i,n)
	{
		cin>>v[i];
		if(v[i]>max)
		{
			max = v[i];
			maxi =i;
		}
		if(v[i] <=min)
		{
			min = v[i];
			mini = i;
		}
	}
	if(mini == n-1 && maxi == 0 )
	{
		cout<<0<<endl;
	}
	else
	{
		if(mini < maxi)
			ans--;
		ans +=abs(n-1-mini);
		ans +=maxi;
		cout<<ans;
	}


    return 0;
}