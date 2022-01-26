/**
 * 454B
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

    ll n;
    cin>>n;
    vll v(n);
    ll mini =0;
    ll mine= INT_MAX;
    set<ll> st;
    bool f=0;
    for0(i,n)
    {
    	cin>>v[i];
    	st.insert(v[i]);
    	if(v[i] <mine)
    	{
    		mine = v[i];
    		mini = i;
    	}
    }
for(ll i = mini; i<n-1;i++)
{
	if(v[i]>v[i+1])
		f=1;
}
cout<<mini;
for(ll i = mini-1; i>0;i--)
{
	if(v[i] < v[i-1])
		f=1;
}
if(f)
{
	cout<<-1;
	return 0;
}
if(mini==0 || st.size()==1)
{
	cout<<0;
	return 0;
}
ll ans = n-mini;
cout<<ans;
    return 0;

}