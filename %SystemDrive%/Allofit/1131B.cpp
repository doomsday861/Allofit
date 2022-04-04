/**
 * 1131B
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

   ll n;
   cin>>n;
   ll ans=1;
   ll x,y;
   x=0;y=0;

   for0(i,n)
   {
   		ll a,b;
   		cin>>a>>b;
   		if(a==0 && b==0 || x == a && y == b)
   			continue;

   		ans += max(1LL*0,(min(a,b)-max(x,y)+1));
		if(x==y)
			ans--;
   		x =a;
   		y = b;
   }
   cout<<ans;
   

    return 0;
}