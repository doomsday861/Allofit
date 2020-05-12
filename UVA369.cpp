	/**
 * UVA 369 COMBINATIONS
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
 ll a,b;

 while(cin>>a>>b)
 	{
 		if(a+b==0)
 		return 0;
 		ll dp[a+1][b+1];
 	 for(ll i=0; i <=a;i++)
 	 {
 	 	for(ll j=0; j <=min(a,b);j++)
 	 	{
 	 		if(j==0 || j==i)
 	 		{
 	 			dp[i][j]=1;
 	 		}
 	 		else
 	 			dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
 	 	}
 	 }
 	 cout<< a<<" things taken "<<b<<" at a time is "<<dp[a][b]<<" exactly.\n";
 	 } 
//timee
    return 0; 
} 