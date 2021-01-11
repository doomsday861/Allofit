/**
 * restore
 boi am i bakk
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll limit = 4 * (pow(10,6)) + 1;
// bool *primeinit()
// {	
// 	bool prime[limit];
// 	memset(prime,true,sizeof(prime));
// 	for(ll i=2; i<=sqrt(limit);i++)
// 	{
// 		if(prime[i])
// 		{
// 			for(ll j = i*i; j<=limit; j +=i)
// 				prime[j] = 0;
// 		}
// 	}
// 	return prime;
// }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
//primeinit();
bool prime[limit];
	memset(prime,true,sizeof(prime));
	for(ll i=2; i<=sqrt(limit);i++)
	{
		if(prime[i])
		{
			for(ll j = i*i; j<=limit; j +=i)
				prime[j] = 0;
		}
	}
 testcase
  {
  	int n;
  	cin>>n;
  	int ar[n];
  	// bool *prime = primeinit();
  	ll primein =2;
  	for(int i=0;i<n;i++)
  		cin>>ar[i];
  	unordered_map<ll,ll> mp;
  	for(ll i=0;i<n;i++)
  	{
  		if(mp.find(ar[i])==mp.end())
  			{
  				while(!prime[primein])
  					primein++;
  				mp[ar[i]] = primein;
  					primein++;
  			}
  	}
  	for(ll i=0;i<n;i++)
  		cout<<mp[ar[i]]<<" ";
  	cout<<'\n';
  	mp.clear();
}
    return 0;
}