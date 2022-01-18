/**
 * 1627A
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

    
 testcase
  {
  	ll n,m,r,c;
  	cin>>n>>m>>r>>c;
  	bool noblack =1;
  	char ar[n][m];
  	for0(i,n)
  	{
  		for0(j,m)
  		{
  			cin>>ar[i][j];
  			if(ar[i][j] == 'B')
  				noblack =0;
  		}
  	}
  	if(ar[r-1][c-1]=='B')
  	{
  		cout<<0<<endl;
  		continue;
  	}
  	ll ans=0;
  	bool onefound=0;
  	if(noblack)
  	{
  		cout<<-1<<endl;
  		continue;
  	}
  	else if(!noblack)
  	{
  		for(ll i=0; i < m;i++)
  		{
  			if(ar[r-1][i]=='B')
  				onefound=1;
  		}
  		if(!onefound)
  		{
  			for(ll i=0; i <n;i++)
  			{
  				if(ar[i][c-1]=='B')
  					onefound=1;
  			}
  		}
  	}
  	if(onefound)
  		cout<<1<<endl;
  	else
  		cout<<2<<endl;

}
   

    return 0;
}