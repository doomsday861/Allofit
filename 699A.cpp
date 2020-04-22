	/**
 * 699A codeforces
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
 cin >>n;
 string s;
 cin >> s;
 vector<ll> v;
 for(ll i =0 ; i < n ; i++)
 {
 	ll x;
 	cin >>x;
 	v.push_back(x);
 }
 bool f=0;
 ll mind = INT_MAX;
 for(ll i =0 ; i < n-1 ; i++)
 {
 	if(s[i]=='R' && s[i+1]=='L')
 	{
 		mind = min((v[i+1]-v[i]),mind);
 		f=1;
 	}
 }
 if(!f)
 {
 	cout<<-1<<endl;
 	return 0;
}
ll t = mind/2;
cout<<t<<endl;
//timee
    return 0; 
} 