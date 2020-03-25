	/**
 * COOK OFF MARCH 2019
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
  	ll maxi=0;
  	ll maxm=0;	
  	ll min = INT_MAX;
  	ll mini =0;
  	ll so=0;
  	bool f2=0;
  	ll n;
  	cin >>n;
  	ll ar[n+1];
  	for(ll i= 1 ; i <= n ;i++)
  	{
  		cin >> ar[i];
  		if(ar[i]>maxm)
  		{
  			maxm = ar[i];
  			maxi = i;
  		}
  		if(ar[i]<min)
  		{
  			min = ar[i];
  		}
  	}
  	ll imax = maxi;
  	ll maxd=0;
  	ll c=0;
  for(ll i =1 ; i <=n ; i++)
  {
  	if(ar[i]==maxm && i!=maxi)
  	{	
  		c++;
  		maxd = max(maxd,(i-maxi));
  		maxi = i;
  	}
  }
  maxd = max(maxd,((n-maxi)+imax));
  ll mid = n/2;
  maxd -=n/2;
 //  if(maxm==min)
 //  {
 //  	cout<<0<<endl;
 //  	continue;
 //  }
 // if((maxd-1)<mid)
 // 	{
 // 		cout<<0<<endl;
 // 		continue;
 // 	}
 //  cout<<abs(maxd-mid)<<endl;
  if(maxd<0)
  	cout<<0<<endl;
  else
  	cout<<maxd<<endl;
}
}