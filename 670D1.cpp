/**
 * 670D1
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
vll needed(100005);
vll have(100005);
ll n,k;
ll find(ll x)
{
	ll ans=0;
	for0(i,n)
	{
		ans +=max(0LL,x*needed[i]-have[i]);
		// cout<<x*needed[i]<<endl;
		// cout<<ans<<endl;
	}
	return ans;
}
int main()
{
    run

   cin>>n>>k;

   for0(i,n) cin>>needed[i];
   for0(i,n) cin>>have[i];

   ll i=1;
   //cout<<find(71)<<endl;
   while(find(i)<=k)
   {
//   		cout<<i<<" "<<(find(i))<<endl;
   		i++;
   }
   cout<<i-1<<endl;

    return 0;
}