/**
 * 1294A
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
  	ll n,a,b,c;
  	cin>>a>>b>>c>>n;
  	bool f=0;
  	ll x = max(a,max(b,c));
  	if(a!=x && n>=0)
  	{
  		n-=(x-a);
  		a=x;
  	}
  	if(b!=x && n>=0)
  	{
  		n-=(x-b);
  		b=x;
  	}
  	if(c!=x && n>=0)
  	{
  		n-=(x-c);
  		c=x;
  	}
  	//cout<<a<<" "<<b<<" "<<c<<" "<<n<<endl;
  	if(a==x&& b==x&& c==x&& n>=0 && n%3==0)
  	{
  		cout<<"YES"<<endl;
  	}
  	else
  		cout<<"NO"<<endl;
}
   

    return 0;
}