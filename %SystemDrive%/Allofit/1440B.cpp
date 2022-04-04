/**
 * 1440B
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	ll n,k;
  	cin >>n>>k;
  	vector<ll> v;
  	for(ll i=0;i<n*k;i++)
  		{	
  			ll x;
  			cin>>x;
  			v.push_back(x);
  		}
  	ll ans=0;
		for (int i = 0; i < v.size(); i++)
		{
			 if(i >=(n-1)/2 * k && (i - (n - 1) / 2 * k) % (n - (n - 1) / 2) == 0)
			 	ans +=v[i];
		}
		cout<<ans<<endl;
	}

    return 0;
}