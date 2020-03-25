	/**
 * UVA 352
 * Kartikeya (doomsday861)
 * 
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
void fill(ll ar[],ll i, ll j, ll n)
{
	for
}
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
ll t=0;
 while(cin>>n)
 	t++;
 bool ar[n+3][n+3]={false};
 for(ll i =0 ;  i<n;i++)
 {
 	for(ll j =0 ; j < n;j++)
 	{
 		cin >> ar[i][j];
 	}
 }
 ll count=0;
for(ll i =0 ;  i<n;i++)
 {
 	for(ll j =0 ; j < n;j++)
 	{
 		if(ar[i][j]==true)
 		{
 			count++;
 			fill(ar,i,j,n);
 		}
 	}
 }
 }

//timee
    return 0; 
} 