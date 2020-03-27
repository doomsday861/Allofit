	/**
 * RGAND cookoff practice
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
#define MOD 10000007
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
  	ll l,r;
  	cin >> l >>r;
  	ll sum=l;
  	ll x=l;
  	while(x!=0)
  	{
  		l++;
  		x &=l;
  		sum +=x;
  	}
  	cout <<sum<<endl;
}
//timee
    return 0; 
} 