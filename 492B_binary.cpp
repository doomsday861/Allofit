/**
 * 492B
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
vll v(2001);
ll n,l;
bool ok(double dis)
{
	//cout<<dis<<endl;
	double d = dis*(double)2.0;
	if(dis<=v[0])
		{
			return false;
		}
	if((dis+v[n-1])<l)
		{
			return false;
		}
	for0(i,n-1)
	{
		if(((double)v[i]+d) < (double)v[i+1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
    run

cin>>n>>l;
v.resize(n);
for0(i,n) cin>>v[i]; 
sort(v.begin(),v.end());
double low = 0.0000000001;
double high = l * double(1.0);
double mid = (low+high)/(double)2.0;
while(low<=high)
{
	mid = (low+high)/(double)2.0;
//	cout<<mid<<endl;
	if(ok(mid))
	{
		high = mid-(double)0.0000000001;
	}
	else
	{
		low = mid+(double)0.0000000001;
	}
}
cout<<fixed<<setprecision(9)<<mid<<endl;
   

    return 0;
}