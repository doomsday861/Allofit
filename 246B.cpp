/**
 * 246B
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
ll s=0;
ll n;
cin>>n;
ll x;
for0(i,n){
	cin>>x;
	s+=x;
}
   if(s%n==0)
   	cout<<n;
   else
   	cout<<n-1;

    return 0;
}