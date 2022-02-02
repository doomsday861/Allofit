/**
 * 234B
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
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>v(n);
     for0(i,n){
      cin>>v[i].fi;
      v[i]. se = i;
    }
      
    
    sort(bend(v));
    cout<<v[n-k].fi<<endl;
    ll x = n-k;
    vll ans(k);
    for(ll i=0; i <k;i++)
    {
        ans[i] = (v[x++].se+1);
    }
    sort(bend(ans));
    for(auto x:ans)
        cout<<x<<" ";


    return 0;
}
