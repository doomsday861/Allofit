/**
 * ARRGAME
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
  	vll v(n);
  	for0(i,n) cin>>v[i];
  	vector<ll> pref;
  	ll count =0;
  	for0(i,n)
  	{
  		if(v[i]==0)
  			count++;
  		else
  			{
  				if(count==0)
  					continue;
  				pref.pb(count);
  				count=0;
  			}
  	}

  	sort(bend(pref));
  	ll largest =0;
  	ll second =0;
  	if(pref.size()==0)
  		cout<<"No";

  	else if(pref.size()==1)
  	{
  		largest = pref[0];
  		if(largest & 1)
  			cout<<"Yes";
  		else
  			cout<<"No";
  	}
  	else
  	{
  		second = pref[pref.size()-2];
  		largest = pref[pref.size()-1];
  		// cout<<largest<<" "<<second<<endl;
  		if((second<(largest+1)/2) &&pref[pref.size()-1]&1)
  			cout<<"Yes";
  		else
  			cout<<"No";
  	}

  	cout<<endl;
}
   

    return 0;
}