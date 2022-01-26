/**
 * 499B
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
#define endl '\n'
using namespace std;
int main()
{
    run
map<string,string> mp;
ll n,m;
cin>>n>>m;
for0(i,m)
{
	string a,b;
	cin>>a>>b;
	mp[a] = b;
}
for0(i,n)
{
	string a;
	cin>>a;
	string b = mp[a];
	if(b.length()<a.length())
		cout<<b<<" ";
	else
		cout<<a<<" ";
}

    return 0;
}