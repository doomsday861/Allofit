	/**
 * UNITGCD APRIL2020 LONG
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool p[1000002];
 int gcd(unsigned int u, unsigned int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}
 void seieves()
{	memset(p,0,sizeof(p));
	p[2]=false;
	p[1]=false;
	for(ll i=2;i<=sqrt(1e6);i++)
	{
		for(ll j=2;j*i<=1e6;j++)
		{
			p[i*j]=true;
		}
	}
}
void princonseve(ll n)
{	const int x =2;
	cout<<n/2<<'\n';
	cout<<3<<' '<<1<<' '<<2<<' '<<3<<'\n';
	for(ll i =4;i<=n;)
	{
		if(i+1>n)
			cout<<1<<' '<<i<<'\n';
		else
			cout<<x<<' '<<i<<' '<<i+1<<'\n';
		i +=2;
	}
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
//seieves();
 testcase
  { 	
  	ll n;
  	cin >> n;
  	if(n==1)
  	{	cout<<1<<'\n';
  		cout<<1<<' '<<1<<endl;
  		continue;
  	}
  	princonseve(n);
  }
//time
    return 0; 
} 