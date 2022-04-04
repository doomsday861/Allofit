/**
 * printing lcs
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
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run

    string a,b;
    cin>>a>>b;
    ll m = a.size();
    ll n = b.size();
    vector<vll> dp;
    dp.resize(m+1);
    for(ll i=0;i<=m;i++)
    {
    	dp[i].resize(n+1);
    	for0(j,n+1)
    	{
    		dp[i][j] =0;
    	}
    }
    for(ll i=1;i<=m;i++)
    {
    	for(ll j=1;j<=n;j++)
    	{
    		if(a[i-1]==b[j-1])
    		{
    			dp[i][j] = 1+dp[i-1][j-1];
    		}
    		else
    			dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
    	}
    }
    for0(i,m+1)
    {
    	for0(j,n+1)
    	cout<<dp[i][j]<<" ";
    	cout<<endl;
    }
    ll i= m;
    ll j = n;
    string ans="";
    while(j>0 && i >0)
    {
    //	cout<<i<<" "<<j<<endl;
    	if(a[i-1]==b[j-1])
    	{

    		ans.pb(a[i-1]);
    		i--;j--;
    	}
    	else if(dp[i-1][j] > dp[i][j-1])
    	{
    		i--;
    	}
    	else
    		j--;

    }
    reverse(bend(ans));
    cout<<ans;

   

    return 0;
}