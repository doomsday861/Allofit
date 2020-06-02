	/**
 * 714B codeforces
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
 map<ll,bool> mp;
 vector<ll> dif;
 ll d=0;
 for(ll i=0;i<n;i++) 
 	{
 		cin >>v[i];
 		if(!mp[v[i]])
 		{
 			dif.push_back(v[i]);
 			d++;
 			mp[v[i]]=true;
 		}
 	}
 	if(d<=2)
 	{
 		cout<<"YES";
 		return 0;
 	}
 	if(d==3)
 	{
 		sort(dif.begin(), dif.end());
 		if(dif[1]-dif[0]==dif[2]-dif[1])
 		{
 			cout<<"YES";
 		}
 		else
 			cout<<"NO";
 	}
 	if(d>3)
 	{
 		cout<<"NO";
 	}

 	}