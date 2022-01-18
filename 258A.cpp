/**
 *  258A
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

string s;
cin>>s;
bool zc=0;
bool oc=0;
for(auto x:s)
{
	if(x=='0')
		zc=1;
	else
		oc=1;
}
if(zc)
oc=0;
if(zc)
{
	for0(i,s.length())
	{
		if(s[i]=='0' && zc)
		{
			zc=0;
			continue;
		}
		cout<<s[i];
	}
	return 0;
}
if(oc)
{
	for(ll i=s.length()-1;i>=0;i--)
	{
		if(s[i]=='1' && oc)
		{
			oc=0;
			s[i]='9';
		}
	}
}
for(auto x:s)
{
	if(x=='9')
		continue;
	cout<<x;
}

    return 0;
}