	/**
 * TAXIS VKCUP 2012 B
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
 vector<ll> v;
 ll ar[4]={0};
 ll sum=0;
for(ll i = 0 ; i < n;i++)
{
	ll x;
	cin >>x;
	v.push_back(x);
	ar[x-1]++;
	sum +=v[i];
}
if(sum <=4)
{
	cout<< 1<<endl;	
	return 0;
}
ll c= ar[3];
while(ar[0] && ar[2])
{
	c++;
	ar[0]--;
	ar[2]--;
}
while(ar[1]>=2)
{
	c++;
	ar[1] -=2;
}
c +=ar[2];
ar[2]=0;
while(ar[1] && ar[0]>=2)
{
	ar[1]--;
	ar[0] -=2;
	c++;
}
while(ar[1] && ar[0])
{
	ar[1]--;
	ar[0]--;
	c++;
}
c +=(ar[0]/4);
ar[0] = (ar[0]%4);
if(ar[0]<=4 && ar[0])
	c +=1;
c +=ar[1];
cout<<c<<endl;
}