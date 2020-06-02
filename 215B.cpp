	/**
 * 215B Codeforces
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
//tim
ll n,m,k;
cin >>n;
vector<ll> x(n);
// ll r1 = max_element(x.begin(), x.end());
// ll p1 = max_element(y.begin(), y.end());
// ll p2 = min_element(z.begin(), z.end());
ll r1=INT_MIN;
ll p1=INT_MIN;
ll p2=INT_MAX;
for(ll i=0;i<n;i++)
{
	cin >>x[i];
	if(x[i]>r1)
		r1 = x[i];
}
cin>>m;
vector<ll>y(m);
for(ll i=0;i<m;i++)
{
	cin>>y[i];
	if(y[i]>p1)
		p1 = y[i];
}
cin>>k;
vector<ll>z(k);
for(ll i=0;i<k;i++)
{
	cin>>z[i];
	if(z[i]<p2)
		p2=z[i];
}
ll a,b;
cin>>a>>b;
//cout<<"a = "<<a<<" b = "<<b<<" r1 = "<<r1<<" p1 = "<<p1<<" p2 = "<<p2<<endl; 
//ll ans = a/b;
ll ans = r1*(sqrt((b*p1)/((b*p1) + (a*p2))));
printf("%.8lf",ans);
//timee
    return 0; 
} 