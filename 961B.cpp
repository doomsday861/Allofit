/**
 * 961B
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

   ll k,n;
   cin>>n>>k;
   vll a(n);
   vll b(n);
   for0(i,n) cin>>a[i];
   for0(i,n) cin>>b[i];
   vll counter(n,0);
   ll fixed =0;
   for0(i,n)
   {
   	if(b[i]==0)
   	{
   		counter[i] = a[i];
   	}
   	else
   		{
   			counter[i] = 0;
   			fixed +=a[i];
   		}
   }
   ll maxadd =0;

   for0(i,k)
   {
   	maxadd+=counter[i];
   }
   ll ans = maxadd;
   for(ll i =1;i<=n-k;i++)
   {
   	maxadd -=counter[i-1];
   	maxadd +=counter[i+k-1];
   	ans = max(ans,maxadd);
   }
   cout<<fixed+ans<<endl;

    return 0;
}
