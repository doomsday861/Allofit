	/**
 * 400b codeforces
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
 char ar[n][m];
 set<ll> s;
 for(ll i=0;i<n;i++)
 {	ll c=0;
 	ll f=0;
 	ll l=0;
 	for(ll j=0;j<m;j++)
 	{
 		cin>>ar[i][j];
 		if(ar[i][j]=='G')
 			{
 				c++;
 				f=j;
 			}
 		if(c==1 && ar[i][j]=='S')
 			{
 				c++;
 				l=j;
 				s.insert(l-f);
 			}
 	}
 	if(c!=2)
 	{
 		cout<<-1<<endl;
 		return 0;
 	}
 }
 cout<<s.size();
 // ll c=0;
 //  for(ll i=0;i<n;i++)
 // {
 // 	for(ll j=0;j<m;j++)
 // 	{
 // 		if(ar[i][j]=='G' && ar[i][j+1]!='S')
 // 			c++;
 // 	}
 // }
// cout<<c<<endl;	
//timee
    return 0; 
} 