	/**
 * RECNDNOS CODECHEF
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
  	vector<ll> v[10001];
  	for(ll i =0 ; i < n;i++)
  	{
  		ll x;
  		cin >>x;
  		v[x].push_back(i);
  	}
  	ll ms=0;
  	ll msi=0;
  	for(ll i =1 ; i<=1000;i++)
  	{	
  		ll c=0;
  		ll last = -69;
  		if(!v[i].size())
  			continue;
  		for(ll j =0 ; j <(ll)v[i].size();j++)
  		{
  			if(v[i][j]==last+1)
  				continue;
  			else
  				{
  					c++;
  					last = v[i][j];
  				}
  		}
  	//	cout<<c<<endl;
  		if(c>ms)
  		{
  			ms =c;
  			msi = i;
  		}
  	}
  	cout<<msi<<endl;
}
//timee
    return 0; 
} 