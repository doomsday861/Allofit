/**
 * 1380C
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
  	ll n,x;
  	cin>>n>>x;
  	vll v(n);
  	for0(i,n)
  	cin>>v[i];
    sort(bend(v));
    ll ans=0;
    ll size = 1;
    for(ll i = n-1;i>=0;i--)
    {
        if(v[i]*size >=x)
        {
            ans++;
            size = 1;
        }
        else
            size++;
    }
    cout<<ans<<endl;

  	
}
   

    return 0;
}