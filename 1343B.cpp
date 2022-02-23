/**
 * 1343B
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
  	ll n;
  	cin>>n;
  	if(n/2&1)
  	{
  		cout<<"NO"<<endl;
  		continue;
  	}
  	else
  	{
  		ll ar[n+1];
  		cout<<"YES"<<endl;
  		ll a = 24;
  		for1(i,n/2)
  		{
  			ar[i] = a;
  			cout<<ar[i]<<" ";
  			a+=4;
  		}
  		a = 3;
  		bool f=0;
  		for1(i,n/2)
  		{
  			if(!f)
  			{
  				cout<<ar[i]+1<<" ";
  				f=1;
  			}
  			else
  			{
  				cout<<ar[i]-1<<" ";
  				f=0;
  			}
  		}
  		cout<<endl;
  	}
}
   

    return 0;
}