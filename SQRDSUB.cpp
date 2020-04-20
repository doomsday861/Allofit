	/**
 * SQUARED SUBSEQUENCE APRIL 2020 LONG
 * Kartikeya (doomsday861)

     _                               _             
  __| | ___   ___  _ __ ___  ___  __| | __ _ _   _ 
 / _` |/ _ \ / _ \| '_ ` _ \/ __|/ _` |/ _` | | | |
| (_| | (_) | (_) | | | | | \__ \ (_| | (_| | |_| |
 \__,_|\___/ \___/|_| |_| |_|___/\__,_|\__,_|\__, |
                                             |___/ 


**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define pb push_back
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
ll calculatetot(ll a)
{
	return(a*(a+1)/2);
}
ll calculate(ll a[],vector<ll>b, ll s) // The Formula was taken from stackoverflow, FOR THE LOVE OF GOD, DONT RUN AFTER ME!
{	
	ll c=0;
	ll cd=0;
	for(ll i = 1;i<b.size()-1;i++)
	{
		if(a[b[i]]%4!=0)
		{	
			ll first = b[i];
			ll prev = b[i-1];//CHANGED THE VARIABLES NAMES
			ll next = b[i+1];
			ll x = first-prev-1;
			ll y = next-first-1;
			ll z = x+y+1;
			cd = calculatetot(z)-calculatetot(x)-calculatetot(y);		//Formula taken from StackOVERFLOW for returning each subsequence total sum!
			c +=cd;
		}
	}
	return c;
}
bool iseven(ll x)
{
	if(x%2==0)
		return true;
	return false;
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
  //	cout<<"#"<<t<<endl;
  	ll n;
  	cin >>n;
  	ll c=0;
  	ll ar[n];
  	vector<ll>cp;
  	cp.pb(-1);
  	ll x=1;
  	for(ll i =0 ;i<n;i++)
  	{
  		cin>>ar[i];
  		if(iseven(ar[i]))
  		{
  			cp.pb(i);
  		}
  	}
  	cp.pb(n);
  //	cout<<x<<endl;
  	ll tot = calculate(ar,cp,x);
  	ll ntot = calculatetot(n);
  	ll answer = ntot-tot;
  	cout<<answer<<endl;
  }
}