/**
 * 387B
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
#define bend(v) v.begin(),v.end()
using namespace std;
int main()
{
    run

ll n,m;
cin>>n>>m;
vll v1(n);
vll v2(m);
for0(i,n) cin>>v1[i];
for0(i,m) cin>>v2[i];
   
sort(bend(v1),greater<ll>());
sort(bend(v2),greater<ll>());

ll ans=0;
// if(n>m)
// {
// 	ans += n-m;
// }
ll j=0;
ll i=0;
for( i=0; i <n && j <m;i++)
{
	if(v1[i]<=v2[j])
	{
		j++;
		continue;
	}
	else
	{
		ans++;
	}
}
// cout<<i<<endl;
// cout<<j<<endl;
if(i!=n)
{
	ans +=n-i;
}
cout<<ans;

    return 0;
}