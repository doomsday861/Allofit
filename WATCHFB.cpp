/**
 * WATCHFB
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

    
 testcase
  {
  	ll q;
  	ll a=-1,b=-1;
  	cin>>q;
  	int greater=-1;
  	ll prevmax = INT_MIN;
  	ll curmin = INT_MAX;

  	while(q--)
  	{
  		ll x,a,b;
  		cin>>x>>a>>b;
  		if(x==1)
  		{
  			cout<<"YES"<<endl;  			
  			prevmax = max(a,b);

  		}
  		if(x==2)
  		{
  			curmin= min(a,b);
  			if(a==b)
  			{
  				cout<<"YES"<<endl;
  				continue;
  			}
  			if(prevmax > curmin)
  			{
  				cout<<"YES"<<endl;
  				prevmax = max(a,b);
  			}
  			else
  			{
  				prevmax =INT_MIN;
  				curmin = INT_MAX;
  				cout<<"NO"<<endl;
  			}

  		}
  	}
}
   

    return 0;
}