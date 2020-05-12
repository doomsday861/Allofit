	/**
 * 227B CODEFORCES
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
 ll n;
 cin>>n;
 vector<ll> v(n);
 ll f[n+1];
 memset(f,0,sizeof(f));
 for(ll i=0; i <n;i++) {
 	cin>>v[i];
 	f[v[i]] = i;
 }
 	ll m;
 cin >>m;
 ll a,b;
 a=0;b=0;
 while(m--)
 {	
 	ll q;
 	cin >>q;
 	ll x= f[q];
 	if(v[x]==q)
 	{
		a +=(x+1);
		b +=(v.size()-x);
	}
	else
	{
		a +=v.size();
		b +=v.size();
	}
	//cout<< x<<endl;
 }
 cout<<a<<" "<<b;
//timee
    return 0; 
} 