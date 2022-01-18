/**
 * 160B
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
 string s;
 cin>>s;
 bool inc =1;
 bool dec =1;
string l = s.substr(0,n);
string r =s.substr(n,2*n);
sort(l.begin(),l.end());
sort(r.begin(),r.end());

for0(i,n)
{
	if(l[i]>=r[i])
	{
		inc =0;
		break;
	}
}   
for0(i,n)
{
	if(l[i]<=r[i])
	{
		dec =0;
		break;
	}
}
if(inc || dec)
	cout<<"YES";
else
	cout<<"NO";

    return 0;
}