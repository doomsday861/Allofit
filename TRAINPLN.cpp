/**
 * TRAINPLN
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
#define bend(x) x.begin(),x.end()
using namespace std;
bool sorter(pair<ll,ll> a,pair<ll,ll> b)
{

	if(a.se == b.se)
	{
		return(a.fi>b.fi);
	}
	return a.se<b.se;

}
int main()
{
    run

    
 testcase
  {
  	ll n;
  	cin>>n;
  	vector<ll> a(n);
  	vector<ll> b(n);
  	for0(i,n) cin>>a[i];
  	priority_queue<ll> pq;
  	vector<ll> v[n+1];
  	for0(i,n)
  	{
  		cin>>b[i];
  		if(b[i]==0)
  			pq.push(a[i]);
  		v[b[i]].pb(a[i]);
  	}
  	double total =0.0;
  	ll index =0;
  	ll cc =0;
  	double ans =0.0;
  	while(!pq.empty())
  	{
  		ll ele = pq.top();
  		pq.pop();
  		cc++;
  		total +=ele *1.0;
  		ans = max(ans,(total)/(cc*1.0));
  		if(index <cc)
  		{	
  			index++;
  			for(auto x:v[index])
  			{
  				pq.push(x);
  			}
  		}
  	}
  	cout<<setprecision(6)<<fixed<<ans<<endl;
  	
  }
    return 0;
}