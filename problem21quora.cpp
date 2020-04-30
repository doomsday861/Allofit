	/**
 * codesites problem 21 quora
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
void sieves(ll n)
{
	bool c[n+1];
	memset(c,0,sizeof(n));
	for(ll i =2;i<=sqrt(n);i++)
	{		ll x=2;
		for(ll j =i;(j*x)<=n;x++)
		{
			ll p = j*x;
			c[p]=true;
		}
	}
	for(ll i = 0; i<=n;i++)
	{
		if(!c[i])
			cout<<i<<" ";
	}
	cout<<endl;
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
 testcase
  { 
  	ll n;
  	cin >>n;
  	sieves(n);
}
//timee
    return 0; 
} 