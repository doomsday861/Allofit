	/**
 * COW3B codechef
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
 testcase{
 	ll n,m;
 	cin>>n;
 	vector<ll> v(n);
 	vector<bool> f(1000001,0);
 	for(ll i =0 ; i < n;i++)
 	{
 		cin>>v[i];
 	}
 	cin>>m;
  	vector<ll> x(m);

 	ll c=0;
 	ll last = 0;
 	for(ll i =0 ; i < m;i++)
 	{
 		cin>>x[i];
 		f[x[i]]=1;
 	}
 	for(ll i=0;i < n ;i++)
 	{
 		if(f[v[i]])
 			last++;
 		else
 		{
			if(last>0)
				c++;
			last=0;
		}
 	}
 	c+=(last>0);
 	cout<<c<<endl;
 }
//timee
    return 0; 
} 