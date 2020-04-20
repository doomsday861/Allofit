	/**
 * CARSELL APRIL2020
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
#define MOD 1e9+7
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
  	ll p=0;
  	ll n;
  	cin >> n;
  	ll ar[n];
  	for(ll i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
  	sort(ar,ar+n,greater<ll>());
  	for(ll i =0 ; i < n;i++)
  	{	
  	//	cout<<ar[i]<<" ";	
  		ar[i] -=i;
  	
  		if(ar[i]<=0)
  		  continue;
  	
  		p +=ar[i];
  	}
  	cout<<(p%1000000007)<<endl;
}	
//timee
    return 0; 
} 