/**
 * 222A
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
using namespace std;
int main()
{
    run
ll n,k;
cin>>n>>k;
vll v(n);
for0(i,n) cin>>v[i];
bool f=0;
ll ele = v[k-1];
for(ll i=k;i<n;i++)
{
	if(v[i]!=ele)
		f=1;
}
ll ans=0;
if(f)
	{
		cout<<-1<<endl;
		return 0;
	}
for(ll i=k-2; i>=0; i--)
{
	if(v[i]!=ele)
		{
			ans=i+1;
			break;
		}
}
cout<<ans;

    return 0;
}