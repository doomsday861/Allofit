	/**
 * CARVANS codechef
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
  	cin >>n;
  	vector<ll> v(n);
  	int count=0;
  	ll m=INT_MAX;
  	for(ll i=0;i <n;i++)
  		{
  			cin>>v[i];
  			//if(i!=0)
  			//	{
  					if(v[i]<=m)
  					{

  						count++;
  						m = v[i];
  					}
  			//	}
  		}
  		cout<<count<<'\n';
}
//timee
    return 0; 
} 