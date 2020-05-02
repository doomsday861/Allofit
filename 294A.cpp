	/**
 * 294A CODEFORCES
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
 for(ll i =0 ; i < n;i++)
 	cin>>v[i];
 ll m;
 cin>>m;
 while(m--)
 {
 	ll x,y;
 	cin >> x>>y;
 	x--;
 	ll t = v[x];
 	if(x==0)
 	{	
 		v[x]=0;
 		v[x+1] += t-y;
 	}
 	else if(x==(n-1))
 	{	
 		v[x]=0;
 		v[x-1] += y-1;
 	}
 	else
 	{	
 		v[x]=0;
 		v[x+1] +=t-y;
 		v[x-1] +=y-1;
 	}
 // 	for(ll i=0;i < n;i++)
 // {
 // 	cout<<v[i]<<" ";
 // }
 //cout<<endl;
 }
 //cout<<endl;
 for(ll i=0;i < n;i++)
 {
 	cout<<v[i]<<endl;
 }
//timee
    return 0; 
} 