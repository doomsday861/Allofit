	/**
 * 25A CODEFORCES
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
 cin >> n;
 ll ein=0;
 ll e=0;
 ll eon=0;
 ll o=0;
 ll ar[n];
 for(ll i =0 ; i < n ;i++)
 {
 	cin >> ar[i];
 	if(ar[i]&1)
 	{
 		o++;
 		ein = i+1;
 	}
 	else
 	{
 		e++;
 		eon = i+1;
 	}
 }
 if(o>e)
 {
 	cout<<eon<<endl;
 }
 else
 	cout<<ein<<endl;
//timee
    return 0; 
} 