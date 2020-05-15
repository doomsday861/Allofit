	/**
 * DRUNK JAILER UVA 
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
// vector<ll> ans;
// for(ll i=5;i<=100;i++)
// {	
// 	bool ar[101];
// 	ll count=0;
// 	memset(ar,0,sizeof(ar));
// 	for(ll j =1; j<=i; j+=j)
// 	{
// 		ar[j]^=1;
// 	}
// 	for(ll x=1;x<=i;x++)
// 	{
// 		if(!ar[x])
// 			count++;
// 	}
// 	ans.push_back(count);
// }
// cout<<ans.size()<<endl;
 testcase
  { 
  	ll n;
  	cin >>n;
  	ll x =sqrt(n);
  	cout<<x<<'\n';
  //	cout<<ans[n-5]<<'\n';
}
//timee
    return 0; 
} 