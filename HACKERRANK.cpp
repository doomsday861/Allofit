	/**
 * HACKERRANK BIT MANIPULATION
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
ll cal(ll n)
{
	ll r= n%8;   // from 1 to n it could be %4
	if(r==0||r==1)
		return n;
	if(r==2||r==3)
		return 2; //would return 1 if was %4
	 if (r==4||r==5)
	{
		return n+2; // would be n+1 with %4
	}
	if(r==6||r==7)
		return 0; //0 remains same lol
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
 // vector<ll> a;
 // a.push_back(0);
 // for(ll i=1; i < 100;i++)
 // {
 // 	a.push_back(i ^ (a[i-1]));
 // }
ll q;
cin >>q;
while(q--)
{
	ll l,r;
	cin>>l>>r;
	//recurrence of 4 in the series. but would be recurrence of 8 for the entire two cal();
	ll ans =cal(l-1) ^ cal(r);
	cout<<ans<<endl;
}

//timee
    return 0; 
} 