/**
 * 670D2
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
		// if(x*needed[i]-have[i]>1e20)
		// 	return -1;
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
   ll ans=0;
   ll l =1;
   ll r = 3000000000LL;
   if(find(1)>k)
   {
   	cout<<0;
   	return 0;
   }
   for1(i,1000)
   {
    if(find(i)>k)
    {
        cout<<i-1<<endl;
        return 0;
    }
   }
   while(l<=r)
   {
   	ll mid = (l+r)/2;
   	//cout<<mid<<endl;
   	if(find(mid)<=k)
   	{
   		l = mid+1;
   		ans = mid;
   	}
   	else
   	{
   		r = mid-1;
   	}
   }
   cout<<ans;
    return 0;
}
