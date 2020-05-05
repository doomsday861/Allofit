	/**
 * 66B CODEFORCES
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
 vector<ll>v(n);
 for(ll i =0; i < n;i++) cin>>v[i];
 	 		ll ans=1;
 	for(ll i =0;i<n;i++)
 	{
 		ll cur =1;
 		ll fro=i+1;
 		ll back=i-1;
 		ll lofro = v[i];
 		ll loback = v[i];
 		for(ll j=0;j<n;j++)
 		{
 			while(fro<n)
 			{
 				if(v[fro]<=lofro)
 					{
 						lofro = min(v[fro],lofro);
 						fro++;
 						cur++;
 					}
 				else
 					break;
 			}
 			while(back>=0)
 			{
 				if(v[back]<=loback)
 				{
 					loback = min(v[back],loback); 					
 					back--;
 					cur++;
 				}
 				else
 					break;
 			}

 		}
 	//	cout<<fro<<" "<<back<<" "<<cur<<endl;
 		ans = max(cur,ans);
 	}
 	cout<<ans<<endl;	

//timee
    return 0; 
} 