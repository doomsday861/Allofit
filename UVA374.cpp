	/**
 * BIGMOD UVA
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
ll a,b,c;
while(cin>>a>>b>>c)
{
	ll x = a%c;
	ll ans =1;
	while(b>0)
	{
		if(b&1)
		ans = (ans*x)%c;

		 b= b>>1;
		x = (x*x)%c;
	}
	cout<<ans<<'\n';
}
//timee
    return 0; 
} 