		/**
	 * XORGM codechef
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
	//timeb
	 testcase
	  { 	
	  	ll n;
	  	cin >> n;
	  	ll a[n];
	  	ll b[n];
	  	ll ax=0;
	  	ll bx=0;
	  	bool f=0;
	  	for(ll i =0 ; i < n;i++)
	  	{
	  		cin >> a[i];
	  		ax ^=a[i];
	  		if(a[i]!=a[i-1] && i!=0)
	  			f=1;
	  	}
	  	ll x=0;
	  	for(ll i=0; i <n;i++)
	  	{
	  		cin>>b[i];
	  		x ^=a[i]^b[i];
	  	}
	  	ll c[n];
	  	for(ll i =0 ; i < n ; i++)
	  	{
	  		c[i] = a[i]^x;
	  	}
	  	bool f2=0;
	  	sort(c,c+n);
	  	sort(b,b+n);
	  	for(ll i=0;i<n;i++)
	  	{
	  		if(c[i]!=b[i])
	  		{
	  			f2=1;
	  			cout<<-1<<endl;
	  			break;
	  		}
	  	}
	  	if(!f2)
	  	{
	  		for(ll i=0;i<n;i++)
	  		{
	  			cout<<(a[i]^x)<<" ";
	  		}
	  	}
	  	cout<<endl;
	}
	//timee
	    return 0; 
	} 