/**
 * 236A
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
	string s;
	cin>>s;
	set<char> c;
	for(auto x:s)
		c.insert(x);

	if(c.size()&1)
		cout<<"IGNORE HIM!";
	else
		cout<<"CHAT WITH HER!";
    return 0;
}