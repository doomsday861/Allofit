	/**
 * 680B CODEFORCES
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
 ll n,m;
 cin>>n>>m;
 vector<bool> v(n);
 for(ll i=0 ;i <n;i++) 
 	{	
 		ll x=0;
 		cin>>x;
 		v[i]=x;
 	}
 	m--;
 	ll g=0;
 ll dis=0;
 while(1)
 {	
 	
 	if(m-dis<0 && m+dis>=n)
 		break;
 	
 	else if(m+dis>=n && m-dis>=0)
 	{
 		if(v[m-dis])
 			g++;
 	}
 	else if(m-dis<0 && dis+m<n)
 	{
 		if(v[m+dis])
 			g++;
 	}
 	else
 	{	
 		if(v[m-dis] && v[m+dis])
 		{
 			if(dis==0)
				g++;
 				else
 				g +=2;
 			}
 	}
 	dis++;
 }
 cout << g<<endl;
//timee
    return 0; 
} 