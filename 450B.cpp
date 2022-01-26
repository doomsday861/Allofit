/**
 * 450B
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
#define mod 1000000007
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
    run

    ll x,y;
    cin>>x>>y;
    ll n;
    cin>>n;
    ll ar[100];
    if(x<0)
    {
    	x = (x+mod)%mod;
    }
    if(y<0)
    {
    	y = (y+mod)%mod;
    }
    ar[1] = x%mod;
    ar[2] = y%mod;
 	for(ll i=3;i<=15;i++)
 		{
 			ar[i] = (ar[i-1]-ar[i-2])%mod;
 			if(ar[i]<0)
 			{
 				ar[i] = (ar[i]+mod)%mod;
 			}
 			// cout<<ar[i]<<endl;
 		}
 	//cout<<(n%6)<<endl;
 	if(n%6==0)
 		cout<<ar[6]<<endl;
 	else
 	cout<<ar[(n%6)]<<endl;


    return 0;
}