	/**
 * a12q2
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
  	ll a,b;
  	cin >>a>>b;
  	ll ar[a][b];
  	for(ll i=0; i < a; i++)
  	{
  		for(ll j=0;j<b;j++)
  		{
  			cin>>ar[i][j];
  		}	
  	}
  	ll count=0;
  	ll maxi[b];
  	for(ll i=0;i<b;i++)
  	{
  		ll maxs=0;
  		for(ll j=0; j <a;j++)
	  		{
	  				maxs = max(ar[j][i],maxs);
  			}
  			maxi[i] = maxs;
  	}
  	for(ll i=0; i <a;i++)
  	{
  		for(ll j=0; j<b;j++)
  		{
  			if(ar[i][j]==maxi[j])
  			{
  				count++;
  				break;
  			}
  		}
  	}
  	cout<<count<<endl;

  }
  //timee
    return 0; 
} 