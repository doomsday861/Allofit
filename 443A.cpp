	/**
 * 443A CODEFORCES
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
 char c;
 vector<bool> f(26,0);
 ll count=0;
 while(cin>>c)
 {
 	if(c-'a'>=0 && c-'a'<=('z'-'a'))
 		{
 			if(!f[c-'a'])
				count++;
			f[c-'a']=1;
		}
 }
 cout<<count<<endl;

//timee
    return 0; 
} 