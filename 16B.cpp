		/**
	 * 16B CODEFORCES
	 * Kartikeya (doomsday861)
	**/
	#include<bits/stdc++.h>
	#include<time.h>
	#define ll long long
	#define testcase ll t;cin>>t;while(t--)
	#define timeb  auto start = high_resolution_clock::now(); 
	#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
	using namespace std;
	bool lol(pair<ll,ll>&a, pair<ll,ll>&b)
	{
		return a.second>b.second;
	}
	int main()
	{
	#ifndef ONLINE_JUDGE 
	freopen("in.txt", "r", stdin); 
	freopen("output.ans", "w", stdout); 
	#endif 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	using namespace std::chrono;
	//timeb
	ll a,b;
	cin >> a>>b;
	vector<pair<ll,ll>>v(b);
	for(ll i=0;i < b;i++)
	{
		ll x,y;
		cin >> x>>y;
		v[i] = make_pair(x,y);
	}
	sort(v.begin(),v.end(),lol);
	// for(ll i=0;i < b;i++)
	// {
	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
	// }
	ll val =0;
	ll ans=0;
	for(ll i=0;i <b;i++)
	{
		if(val+v[i].first<=a)
		{
			val +=v[i].first;
			ans += v[i].first*v[i].second;
		}
		else
		{
			ll left = a-val;
			ans += left*v[i].second;
			break;
		}
	}
	cout<<ans<<'\n';
	//timee
	    return 0; 
	} 