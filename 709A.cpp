	/**
 * 709A CODEFORCES
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
 ll n,d,b;
 cin >> n>>b>>d;
 ll c=0;
 ll s=0;
 for(ll i=0 ; i <n;i++)
 {
 	ll x;
 	cin >>x;
 	if(x>b)
 		continue;
 	s +=x;
 	if(s>d)
 	{
 		s=0;
 		c++;
 	}
 }
//tim
 cout<<c<<endl;
    return 0; 
} 