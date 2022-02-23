/**
 * 1257B
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
void solve(ll x, ll y)
{
  	if(x==1)
  	{
  		if(y==1)
  			{
  				cout<<"YES"<<endl;
	  				return;
  			}	
  		else
  			{
  				cout<<"NO"<<endl;
  				return;
     		}
  	}
  		if(x>=y)
  		{
  			cout<<"YES"<<endl;
  			return;
  		}
  		if((x==3 && (y!=2))||((x==2) && y!=3))
  		{
  			cout<<"NO"<<endl;
  			return;
  		}
  		else
  			cout<<"YES"<<endl;
  		return;
}
int main()
{
    run

    
 testcase
  {
  	ll x,y;
  	cin>>x>>y;
  	solve(x,y);

}
   

    return 0;
}