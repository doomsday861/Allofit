/**
 * str_reverse
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
  	string s;
  	cin>>s;
  	string t = s;
  	reverse(bend(t));
  	ll ans=0;

  	for0(i,s.length())
  	{
  		if(s[i]!=t[i])
  			ans++;
  	}
  	//cout<<t<<endl;
  	cout<<ans<<" "<<s.length()-ans-1<<endl;
  	if(ans==s.length())
  	{
  		cout<<ans-1<<endl;
  	}
  	else
  	{
  		cout<<ans<<endl;
  	}
  	
  	}
   

    return 0;
}