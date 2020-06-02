	/**
 * 476B codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll double
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
 string a,b;
 cin >>a>>b;
 // vector<ll>x(11,0);
 // vector<ll>y(11,0);
 // vector<ll>z(11,0);
 ll q = count(b.begin(),b.end(),'?');
 ll total = count(a.begin(),a.end(),'+') - count(a.begin(),a.end(),'-') - count(b.begin(), b.end(),'+') + count(b.begin(), b.end(),'-');
 // ll disa = count(a.begin(), a.end(),'+') - count(a.begin(), a.end(),'-');
 // ll disb = -count(b.begin(), b.end(),'-') + count(b.begin(), b.end(),'+');
 // ll total = disb-disa;
 ll count=0;
 for(ll i=0;i<(long long)(1LL<<(long long)q);i++)
 {	
 	ll ss = total;
 	for(ll j=0;j<q;j++)
 	{
 		if((long long)i & (1LL<<(long long)j))
 			ss++;
 		else
 			ss--;
 	}
 	if(ss==0)
 		count++;
 }
 cout.precision(69);
cout<<(count/(pow(2,q)))<<endl;
}