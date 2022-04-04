/**
 * 1244B
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
  	ll lo=0;
    ll ro=0;
    ll ans=0;
    bool f=1;
    for0(i,n)
    {
        if(s[i]=='1')
        {
            ans = max(2*(i+1),2*(n-i+1));
            f=0;
        }
    }

    if(f)
        cout<<n<<endl;
    else
        cout<<ans<<endl;
}
   

    return 0;
}