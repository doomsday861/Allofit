/**
 * MAGNETSORT
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
  	vll v1(n);
  	for0(i,n)
  	{
  		cin>>v[i];
  		v1[i] = v[i];
  	}

  	string s;
  	cin>>s;
  	sort(v.begin(),v.end());
  	bool f =0;
  	for0(i,n)
  	{
  		if(v[i]!=v1[i])
  		{
  			f=1;
  			break;
  		}
  	}
  	if(!f)
  	{
  		cout<<0<<endl;
  		continue;
  	}
  	ll nc=0;
  	ll sc=0;
  	for0(i,n)
  	{
  		if(s[i]=='N')nc++;
  		else
  			sc++;
  	}
  	if(sc==0 || nc ==0)
  	{
  		cout<<-1<<endl;
  		continue;
  	}
  	else
  	{
  		ll ans =2;
  		ll cur;
  		ll i=0;
  		ll j = n-1;
  		ll counter = n;
  		while(s[i]==s[j])
  		{
  			counter--;
  			j--;
  		}
  		f =0;
  		for(ll i = counter;i<n;i++)
  		{
  			if(v1[i]!=v[i])
  			{
  				f =1;
  				break;
  			}
  		}
  		if(f)
  		{
  			cur =2;
  			ans = min(ans,cur);
  		}
  		else
  		{
  			cur = 1;
  			ans = min(ans,cur);
  		}
  		i =0;
  		j = n-1;
  		counter=0;
  		while(s[i]==s[j])
  		{
  			counter++;
  			i++;
  		}
  		f=0;
  		for0(i,counter)
  		{
  			if(v[i]!=v1[i])
  			{
  				f=1;
  				break;
  			}
  		}
  		if(f)
  		{
  			cur = 2;
  			ans = min(ans,cur);
  		}
  		else
  		{
  			cur =1;
  			ans = min(ans,cur);
  		}
  		cout<<ans<<endl;
  	}
}
   

    return 0;
}