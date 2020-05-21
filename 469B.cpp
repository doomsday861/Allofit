	/**
 * 469B codeforces
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
 ll p,q,l,r;
 cin >>p>>q>>l>>r;
 bool vis[2000];
 memset(vis,0,sizeof(vis));
 for(ll i =0; i < p; i++)
 {
 	ll a,b;
 	cin >>a>>b;
 	for(ll x =a; x<=b;x++)
 		vis[x] = true;
 }
 vector<pair<ll,ll>> v;
 for(ll i=0 ; i < q; i++)
 {
 	ll a,b;
 	cin >>a>>b;
 	v.push_back(make_pair(a,b));
 }
 ll count=0;
 for(ll i = l ; i <=r ; i++)
 {
 	bool f=1;
 	for(ll j=0; j <q && f;j++)
 	{
 		for(ll k = v[j].first + i; k<= v[j].second + i ; k++)
 		{
 			if(vis[k])
 			{
 				f =0;
 				break;
 			}
 		}
 	}
 	if(!f)
 	{
 		count++;
 	}
}
cout<<count<<endl;
//timee
    return 0; 
} 