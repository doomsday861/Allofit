/**
 * uva1806 cheerleaders
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
#define mod 1000007
ll C[550][550];
ll solve(ll n,ll m,ll k)
{
	ll ans=C[n*m][k];
		for(int i=1;i<16;i++)
		{
			int nn=n,mm=m,cnt=0;
			if(i&1)
				nn--,cnt++;
			if(i&2)
				nn--,cnt++;
			if(i&4)
				mm--,cnt++;
			if(i&8)
				mm--,cnt++;
			if(cnt&1)
				ans-=C[nn*mm][k];
			else
				ans+=C[nn*mm][k];
			ans=(ans%mod+mod)%mod;
		}
		return ans;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
for(ll i =1 ; i < 550 ;i++)
{
	for(ll j =1; j <=i;j++)
	{
		if(j==1)
			C[i][j] = i;
		else
			C[i][j] = (C[i-1][j-1]+C[i-1][j])%mod;
	}
}
ll x=1;
 testcase
  {	
  	ll a,b,d;
  	cin >>a>>b>>d;
  	cout<<"Case "<<x++<<": "<<solve(a,b,d)<<endl;

  }
    return 0;
}