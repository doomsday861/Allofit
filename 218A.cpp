	/**
 * 218A codeforces
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
 cin >> n>>k;
 ll ar[2*n+1];
 ll maxm =0;
 for(ll i = 0 ;i<(2*n+1);i++)
 {
 	cin >> ar[i];
 	maxm++;
 }
 cout << ar[0]<<" ";
 for(ll i = 1; i<(2*n+1);i+=2)
 {
 	if(k>0 && (ar[i-1]+1)<ar[i] && ar[i]>(ar[i+1]+1))
 	{
 		k--;
 		ar[i]--;
 	}
 }
 for(ll i =1; i <(2*n+1);i++)
 	cout<<ar[i]<<" ";

//timee
    return 0; 
} 