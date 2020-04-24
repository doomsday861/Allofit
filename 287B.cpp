	/**
 * 287B CODEFORCES
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
  if(n==1)
 {
	cout<<0<<endl;
	return 0;
}
if((n-1)>((k*(k-1))/2))
{
	cout<<-1<<endl;
	return 0;
}
n--;
k--;
ll ans=0;
while(n)
{
	k = min(n,k);
	ll low = 1;
	ll hi = k;
	while(low<hi)
	{
		ll mi = (low+hi)/2;
		if((k*(k+1)/2 - (mi-1)*(mi)/2) > n)
		low = mi+1;
		else
		hi = mi;
	}
	ans += k-low+1;
	n -= k*(k+1)/2 - (low-1)*low/2;
}
cout<< ans<<endl;
} 