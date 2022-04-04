	/**
 * 142B codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool p[1000009];
void  sieves()
{	
	memset(p,0,sizeof(p));
	p[1]=true;
	p[2]=false;
	for(ll i =2;i<=sqrt(1000001);i++)
	{
		for(ll j =2;j*i<=1000001;j++)
		{
			p[j*i]=true;
		}
	}
}
ll findr(ll n)
{
	long double l = sqrt(n);
	if(l-floor(l)==0)
		return l;
	else
		return 0;
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
sieves();
 ll n;
 cin >>n;
 for(ll i =0 ;i<n;i++)
 {		bool f=0;
 	ll x;
 	cin >>x;
 	if(findr(x)==0||x==1)
 	{
 		cout<<"NO"<<endl;
 		continue;
 	}	
 	ll z = sqrt(x);
 	if(!p[z])
 	{
 		cout<<"YES"<<endl;
 	} 
 	else
 		cout<<"NO"<<endl;
 }
//timee
    return 0; 
} 