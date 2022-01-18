/**
 * 148A
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
	ll a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	set<ll> st;
	for1(i,e)
	{
		if(i%a==0 || i%b==0 || i%c==0 || i%d==0)
			st.insert(i);
	}
	cout<<st.size();
    return 0;
}