/**
 * 433A
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
ll hc=0,tc=0;
ll sum=0;
vll v(n);
ll rs=0;
ll ls=0;
for0(i,n)
{
	cin>>v[i];
}
sort(v.begin(),v.end(),greater<ll>());
for0(i,n)
{
	if(rs>=ls)
	{
		ls +=v[i];
	}
	else
	{
		rs+=v[i];
	}
}
if(ls==rs)
cout<<"YES";
else
cout<<"NO";
return 0;
}