		/**
	 * 492 B CODEFORCES
	 * Kartikeya (doomsday861)
	**/
	#include<bits/stdc++.h>
	#include<time.h>
	#define ll long long
	#define testcase ll t;cin>>t;while(t--)
	#define timeb  auto start = high_resolution_clock::now(); 
	#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
	using namespace std;
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
	//tim
	ll n,l;
	cin >>n>>l;
	vector<ll> v(n);
	for(ll i=0; i<n;i++)
	cin>>v[i];
	sort(v.begin(),v.end());
	ll maxd=INT_MIN;
	for(ll i=1;i<n;i++)
		{
			maxd = max(v[i]-v[i-1],maxd);
		}
		maxd = max(maxd,max(l-v[n-1],v[0]));
		double x = double(maxd)/2.0000;
		double ans = max(x,max((double)l-v[n-1],(double)v[0]));
		cout<<setprecision(9)<<ans<<endl;
	//timee
	    return 0; 
	} 