/**
 * DAREA
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll f1 = LLONG_MIN;
ll f2=  LLONG_MAX;
ll w1 = LLONG_MIN;
ll w2 = LLONG_MIN;
ll calc = LLONG_MAX;
ll n;
multiset<ll> x;
multiset<ll> y;
vector<pair<ll,ll>> cordx;
vector<pair<ll,ll>> cordy;
bool sorter(pair<ll,ll> a, pair<ll,ll> b)
{
	if(a.first > b.first)
		return false;
	if(a.first == b.first)
		{
			if(a.second > b.second)
				return false;
			else
				return true;
		}	
	else
		return true;
}
ll areacalcu(char c)
{
	f1 = LLONG_MIN;
	f2=  LLONG_MAX;
	w1 = LLONG_MIN;
	w2 = LLONG_MIN;
	calc = LLONG_MAX;
	for(ll i=0; i <n-1;i++)
	{
		if(c =='x')
		{
			f1 = max(f1,cordx[i].second);
			f2 = min(f2,cordx[i].second);
			w1 = f1-f2;
			auto it2 = y.find(cordx[i].second);
			y.erase(it2);
			w2 = *y.rbegin() - *y.begin();
			ll tar = (cordx[i].first - cordx[0].first) * w1 + (cordx[n - 1].first - cordx[i + 1].first) * w2;
			calc = min(calc,tar);
		}
		if(c =='y')
		{
			f1 = max(f1,cordy[i].second);
			f2 = min(f2,cordy[i].second);
			w1 = f1-f2;
			auto it2 = x.find(cordy[i].second);
			x.erase(it2);
			w2 = *x.rbegin() - *x.begin();
			ll tar = (cordy[i].first - cordy[0].first) * w1 + (cordy[n - 1].first - cordy[i + 1].first) * w2;
			calc = min(calc,tar);
		}
	}
	return calc;
}



int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	cordx.clear();
  	cordy.clear();
  	x.clear();
  	y.clear();
  	cin>>n;
  	for(ll i=0; i < n; i++)
  	{
  		ll cord1,cord2;
  		cin>>cord1>>cord2;
  		cordx.push_back({cord1,cord2});
  		cordy.push_back({cordx[i].first, cordx[i].second});
  		x.insert(cordx[i].first);
  		y.insert(cordx[i].second);
  	} 
  	sort(cordx.begin(),cordx.end(),sorter);
  	sort(cordy.begin(), cordy.end(),sorter);

  	ll ans1 = areacalcu('x');
  	ll ans2 = areacalcu('y');
  	ll ans = min(ans1,ans2);
  	if(ans == LLONG_MAX)
  		ans =0;
  	cout<<ans<<endl;
  }
  return 0;
}