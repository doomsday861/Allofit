/**
 * PLPROCESS
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

    
 testcase
  {
  	ll n;
  	cin>>n;
  	vll v(n);
  	ll sum=0;
  	for0(i,n) {
  		cin>>v[i];
  		sum+=v[i];
  	}
  	ll sum1=0;
  	ll sum2=0;
  	ll ans=0;
  	ll cur = sum;
  	for0(i,n)
  	{
  		sum1+=v[i];
  		sum2 = sum-sum1;
  		ll temp = abs(sum1-sum2);
  		if(temp<=cur)
  		{
  			ans = max(sum1,sum2);
  			cur = temp;
  		}

  	}
  	cout<<ans<<endl;


}
   

    return 0;
}