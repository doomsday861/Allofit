/**
 * 266A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main()
{
ll n;cin>>n;
string s;
cin>>s;
ll ans=0;

for0(i,n)
{
	if(s[i] == 'R')
	{ 
		while(s[i+1]=='R' && i+1!=n)
			{
				ans++;
				i++;
			}
	}
	else if(s[i]=='B')
	{
		while(s[i+1]=='B' && i+1<n)
		{
			ans++;
			i++;
		}
	}
		else if(s[i]=='G')
	{
		while(s[i+1]=='G' && i+1<n)
		{
			ans++;
			i++;
		}
	}			
}
cout<<ans;

    return 0;

}