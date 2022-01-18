/**
 * 275A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool isval(ll i,ll j)
{
	if(i>=0 && j>=0 && i<3 && j<3)
		return true;
	return false;
}

int main()
{
ll ans[3][3];
ll ar[3][3];
for0(i,3)
{
	for0(j,3)
	{
		cin>>ar[i][j];
		ans[i][j] =ar[i][j];
	}
}
for0(i,3)
{
	for0(j,3)
	{
		if(isval(i+1,j))
		ans[i+1][j] +=ar[i][j];
		if(isval(i-1,j))
		ans[i-1][j] +=ar[i][j];
		if(isval(i,j+1))
		ans[i][j+1] +=ar[i][j];
		if(isval(i,j-1))
		ans[i][j-1] +=ar[i][j];
	}
}
for0(i,3)
{
	for0(j,3)
	{
		//cout<<ans[i][j]<<" ";
		if(ans[i][j]&1)
			cout<<0;
		else
			cout<<1;
	}
	cout<<endl;
}

return 0;
}
