/**
 * 61A
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
string a,b;
cin>>a>>b;
ll n = a.length();
for0(i,n)
{
	if(a[i]==b[i])
		cout<<0;
	else
		cout<<1;
}

    return 0;
}