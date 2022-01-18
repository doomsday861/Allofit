/**
 * 353A
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
    vector<pair<ll,ll>> v;
    ll lefts =0;
    ll rights =0;
    ll leftoc=0;
    ll rightoc=0;
    for0(i,n)
    {
    	ll a,b;
    	cin>>a>>b;
    	lefts +=a;
    	if(a&1)leftoc++;
    	if(b&1)rightoc++;
    	rights +=b;
    	v.pb({a,b});
    }
    if(lefts %2==0 && rights%2==0)
    {
    	cout<<0;
    	return 0;
    }
    else if((lefts%2!=0 && rights%2==0) ||(rights&1 && lefts%2==0))
    {
    	cout<<-1;
    	return 0;
    }
    else
    {
    	for(auto x:v)
    	{
    		if(x.first&1 && x.se%2==0)
    		{
    			cout<<1;
    			return 0;
    		}
    		if(x.fi%2==0 && x.se&1)
    		{
    			cout<<1;
    			return 0;
    		}
    	}
    }
    cout<<-1;

    return 0;
}