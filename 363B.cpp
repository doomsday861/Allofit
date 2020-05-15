	/**
 * 363B codeforces
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
 ll n,k;
 cin>>n>>k;
 vector<ll> v(n);
 ll ts=0;
 vector<ll> pre;
 for(ll i=0; i < n ; i++)	 
 	{
 		cin>>v[i];
 		ts +=v[i];
 		pre.push_back(ts);
 	}
 ll mind = pre[k-1];
 ll ai=1;
 ll counter=1;
 for(ll i=k;i<n;i++)
 {
 	//mind = min(mind,pre[i]-pre[i-k]);
 	if(mind>pre[i]-pre[i-k])
 	{
 		mind = pre[i]-pre[i-k];
 		ai = i - (i-k);
 		//cout<<counter+1<<endl;
 		ai = counter+1;
 	}
 	counter++;
 }
cout<<ai<<endl;

//timee
    return 0; 
} 