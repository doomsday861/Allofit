	/**
 * DIFFERENCE ARRAY HACKERRANK ARRAYMANIPULATION
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
 vector<ll>ar(n+1,0);
 vector<ll>d(n+1,0);
 for(ll i =0 ; i <=n; i++)
 	{
 		ar[i]=0;
 		d[i]=0;
 	}
// d[n]=0;
 ll q;
 cin>>q;
 while(q--)
{
	ll a,b,k;
	cin >> a>>b>>k;
	a--;
	b--;
	d[a] +=k;
	d[b+1] -=k;
}
ll m=0;
for(ll i =0 ; i <=n;i++)
{
	if(i==0)
	 	ar[i]=d[i];
	else
		{
			ar[i] = d[i]+ar[i-1];
			m = max(m,ar[i]);
		}
	//	cout<<ar[i]<<" ";

}
cout<<m<<endl;
//timee
    return 0; 
} 