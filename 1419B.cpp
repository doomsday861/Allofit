/**
 * 1419B
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
  	int ans = 0;
  	ll left = n;;int k=1;
  	while(left>0){
  		ll a = pow(2,k);
  		// cout<<a<<endl;
  		a--;k++;
  		ll us = ((a+1)*a)/2;
  		if(left>=us)
  		{
  			left-=us;
  			ans++;
  		}
  		else
  			break;
  	}
  	cout<<ans<<endl;

}
   

    return 0;
}