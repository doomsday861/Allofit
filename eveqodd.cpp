/**
 * EVEQODD
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
ll countTrailingZero(ll x) //gfg trailing SOURCE: GEEKFORGEEKS
{
  int count = 0;
  while ((x & 1) == 0)
  {
      x = x >> 1;
      count++;
  }
  return count;
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vll v(2*n);
    ll oc =0;
    ll ec=0;
    vll even,odd;
    vll oddcost;
    for0(i,2*n)
    {
        cin>>v[i];
        if(v[i]&1)
        {
            oc++;
            odd.pb(v[i]);

        }
        else
        {
            ec++;
            if(v[i]==0)
                continue;
            even.pb(v[i]);
            oddcost.pb(countTrailingZero(v[i]));
        }
    }
    sort(bend(even));
    sort(bend(odd));
    sort(bend(oddcost));
    if(oc==ec)
    {
        cout<<0<<endl;
        continue;
    }
    ll ans=0;
    if(oc>n)
    {
        ll diff = oc-n;
        ans+=diff;
    }
    if(ec > n)
    {
        ll diff = ec-n;
        for0(i,diff)
        {
            ans+=oddcost[i];
        }
    
    }
    cout<<ans<<endl;
}

    return 0;
}
