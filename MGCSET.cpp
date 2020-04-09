	/**
 * MGCSET JULY18B
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
  	ll n,m;
  	cin >> n>>m;
  	ll c=0;
  	vector<ll> v(n);
  	for(ll i =0 ; i <n;i++)
  		{	
  			ll x; cin >> x;
	  		if(x%m==0)
	  			c++;
	  	}
	  	ll z = pow(2,c)-1;
	  	cout<<z<<endl;
	  }
//timee
    return 0; 
} 