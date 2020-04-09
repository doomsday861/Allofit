	/**
 * PROBLEM 27 CODESITES
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
  	ll n;
  	cin >>n;
  	ll ar[n];
  	for(ll i =0 ; i < n ; i++)
  	{
  		cin>>ar[i];
  	}
  	ll x;	cin>>x;
  	ll ar2[x];
  	for(ll i =0 ; i  <x;i++)
  	{
  		cin >>ar2[i];
  	}
  	ll c=0;
  	for(ll i =0 ; i < n ;i++)
  	{
  		for(ll j =0 ; j<x;j++)
  		{
  			if(ar2[j]==ar[i]+1 || ar2[j]==ar[i]-1)
  			{
  				c++;
  				ar2[j]=-9999;
  				ar[i]=-9999;
  			}
  		}
  	}
  	cout<<c<<endl;

//timee
    return 0; 
} 