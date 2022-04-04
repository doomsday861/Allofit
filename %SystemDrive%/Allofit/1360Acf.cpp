/**
 * 1360A
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

// set<ll> st;
// for1(i,1000)
// {
// 	st.insert(i*i);
// }
    
 testcase
  {
  	ll a,b;
  	cin>>a>>b;
  	ll x = min(max(2*a,b),max(2*b,a));
  	cout<<x*x<<endl;
  	// if(st.count(x))
  	// {
  	// 	cout<<x<<endl;
  	// 	continue;
  	// }
  	// auto y = upper_bound(bend(st),x);
  	// cout<<*y<<endl;
}
   

    return 0;
}