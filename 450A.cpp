/**
 * 450A
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
 
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    ll sum=0;
    for0(i,n){
     cin>>v[i];
     sum+=v[i];
 	}
 	ll maxi=0;
 	ll ans=n;
 	bool f=1;
 	while(f)
 	{
 		sum=0;
 		for0(i,n)
 		{
 			if(v[i]>0)
 			{
 				v[i] -=m;
 				sum+=v[i];
 				ans = i+1;
 			}
 		}
 		bool x=0;
 		for0(i,n)
 		{
 			if(v[i]>0)
 				x=1;
 		}
 		if(!x)
 			f=0;
 	}
 	cout<<ans;
    return 0;
}