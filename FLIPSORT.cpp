/**
 * FLIPSORT
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
  	string s;
  	cin>>s;
  	string sorted = s;
  	sort(bend(sorted));
  	if(s==sorted)
  	{
  		cout<<"0"<<endl;
  		continue;
  	}
  	ll firstpos1 = -1;
  	ll lastpos0 = -1;
  	for(int i=0;i<n;i++)
  	{
  		if(s[i]=='1')
  		{
  			firstpos1 = i;
  			break;
  		}
  	}
  	for(int i = n-1;i>=0;i--)
  	{
  		if(s[i]=='0')
  		{
  			lastpos0 = i;
  			break;
  		}
  	}
   vector<pair<ll,ll>>ans;
   ans.pb({firstpos1+1,lastpos0-firstpos1+1});
   ll l = firstpos1+1;
   ll r =	lastpos0-1;
   while(l<r)
   {
   		if(s[l]!=s[r])
   		{
   			ans.pb({l+1,r-l+1});
   		}
   		l++;
   		r--;
   }


  	cout<<ans.size()<<endl;
  	for(auto x:ans)
  		cout<<x.fi<<" "<<x.se<<endl;
}
    return 0;
}