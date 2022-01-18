/**
 * 433A
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
using namespace std;
int main()
{
    run

ll n;
cin>>n;
ll hc=0,tc=0;
ll sum=0;
for0(i,n)
{
	ll x;
	cin>>x;
	if(x==100){
		hc++;
		sum+=1;
	}
	else
		{
			tc++;
			sum+=2;
		}
}
if(sum&1)
{
	cout<<"NO";
	return 0;
}
ll h = sum/2;
bool f=0;
for0(i,tc)
{
	if(2*i <= h && h- 2*i <=hc)
		f=1;
	else
		f=0;
}
if(f)
	{
		cout<<"YES";
    return 0;
}
else
cout<<"NO";
    return 0;
}