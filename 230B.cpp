/**
 * 230B
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
unordered_set<ll> st;
bool isprime(ll n)
{
	for(ll i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
		return true;
}
void init()
{
	st.insert(4);
	for(ll i=2;i<=1000007;i++)
	{	
		if(i&1)
		if(isprime(i))
			st.insert(i*i);
	}
}
int main()
{
    run
init();
ll n;
cin>>n;
while(n--)
{
	ll x;
	cin>>x;
	if(st.count(x))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
   

    return 0;
}