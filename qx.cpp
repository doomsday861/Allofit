/**
 * qx
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
bool cmp(pair<ll,ll> &a, pair<ll,ll>&b)
{
    if(a.fi==b.fi)
    {
        return (b.se<a.se);
    }
    return a.fi<b.fi;
}
int main()
{
    run
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for0(i,n)
    cin>>v[i].fi>>v[i].se;
    
    sort(bend(v),cmp);
    ll cnt=0;
    ll cur=0;
    for0(i,n)
    {
        cout<<v[i].fi<<" "<<v[i].se<<endl;
        if(v[i].fi<= cur and v[i].se > cur)
        {
            cur = v[i].se;
            cnt++;
            // cout<<cur<<"="<<v[i].fi<<" "<<v[i].se<<endl;
        }
    }
    cout<<cnt<<endl;

    
    

    return 0;
}
