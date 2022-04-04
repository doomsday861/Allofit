/**
 * 1646C
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
	ll fact[16];
	fact[0]=1;
	fact[1]=1;
	for(ll i=2;i<16;i++)
	{
		fact[i]=fact[i-1]*i;
	}   
	testcase{
		ll n;
		cin>>n;
		ll ans =LLONG_MAX;
		for(ll mask =0; mask<(1<<15);mask++)
		{
			ll numberoffactorials = __builtin_popcountll(mask);
			ll sum=0;
			for0(j,16)
			{
				if(mask&(1<<j))
					sum+=fact[j];
			}
			if(sum<=n)
			{
				ll powerof2count = __builtin_popcountll(n-sum);
				ll temp = powerof2count+numberoffactorials;
				ans =min(ans,temp);
			}
		}
		cout<<ans<<endl;

	}

    return 0;
}