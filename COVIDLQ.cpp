	/**
 * COVIDLQ LONG APRIL20
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
  	ll maxd=INT_MAX;
  	ll n;
  	ll d=0;
  	bool f=0;
  	cin >> n;
  	ll ar[n];
  	for(ll i =0 ; i < n; i++)
  	{
  		cin >>ar[i];
  		if(ar[i]==1 && !f)
  		{
  			d =i;
  			f=1;
  			continue;
  		}
  		if(ar[i]==1 && f)
  		{
  			maxd = min((i-d),maxd);
  			d = i;
  		}
  	}
  	if(maxd<6)
  		cout<<"NO"<<endl;
  	else
  		cout<<"YES"<<endl;

}
//timee
    return 0; 
} 