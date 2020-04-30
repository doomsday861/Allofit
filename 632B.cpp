	/**
 * 632B 
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
  	ll n,m; // b=w+1
  	cin >>n>>m;
  	ll c = n*m;
  	ll b;
  		b = c/2;  		
  	ll w=b;
  	b++;
  	  	if(c&1)
  	  		w++;
	w--;
	cout<<b<<" "<<w<<endl;
  	for(ll i =0;i<n;i++)
  	{
  		for(ll j =0;j<m;j++)
  		{
  			if(b!=0)
  			{
  				cout<<'B';
  				b--;
  			}
  		}
  	}
}
//timee
    return 0; 
} 