/**
 * 520B codeforces
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll fun(ll n,ll m)
{
	ll ans =0;
	if(n>m)
		return n-m;
	while(m>n)
	{
		if(m&1)
		{
			m++;
			ans++;
		}
		m/=2;
		ans++;
	}
	return ans+(n-m);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n,m;
cin >>n>>m;
cout<<fun(n,m);

    return 0;
}