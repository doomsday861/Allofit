/**
 * 34A
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

ll n;
cin>>n;
vll v(n);
for0(i,n) cin>>v[i];
ll a,b;
ll mini =INT_MAX;
for0(i,n-1)
{
	if(abs(v[i]-v[i+1]) < mini)
	{
		mini = abs(v[i]-v[i+1]);
		a =i+1; b= i+2;
	}
}
if(abs(v[n-1]-v[0]) < mini)
{
	mini = abs(v[n-1]-v[0]);
	a =n; b=1;
}  
cout<<a<<" "<<b;
    return 0;
}