	/**
 * 287A codeforces
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
 vector<string> v(4);
 for(ll i =0 ; i < 4;i++)
 {
 	cin>>v[i];
 }
 bool f=0;
 for(ll t =0 ; t<=2&& !f; ++t)
 {
 	for(ll l =0; l<=2; l++)
 	{
 		ll dot=0;
 		for(ll r=0;r<2;r++)
 		{
 			for(ll c=0;c <2;c++)
 			{
 				if(v[t+r][l+c]=='.')
 					dot++;

 			}
 		}
 	if(dot!=2)
 		{
 			f=1;
 			break;
 		}
 	}
 }
 cout<<((f)?"YES":"NO")<<endl;
//timee
    return 0; 
} 