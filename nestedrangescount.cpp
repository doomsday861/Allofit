/**
 * nested ranges count
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

bool sorter(pair<pair<int,int>,int>&a, pair<pair<int,int>,int>&b)
{
    if(a.fi.fi == b.fi.fi) return a.fi.se > b.fi.se;
    return a.fi.fi<b.fi.fi;
}
int main()
{
    run
    ll n;
    cin>>n;
    vector<pair<pair<int,int>,int>>vpp;
    set<int>opening;
    set<int>ending;
    for0(i,n)
    {
        ll a,b;
        cin>>a>>b;
        vpp.pb({{a,b},i});
    }
    sort(bend(vpp),sorter);
    bool contains[n];
    bool contained[n];
    for0(i,n)
    {
        contains[i] = 0;
        contained[i] = 0;
    }
    ll open =0;
    for0(i,n)
    {
        opening.insert(vpp[i].fi.fi);
        ending.insert(vpp[i].fi.se);
        ll open_till_now = *opening.lower_bound(vpp[i].fi.fi) - *opening.begin();
        ll end_till_now = *ending.lower_bound(vpp[i].fi.se) - *ending.begin();
        cout<<open_till_now<<" "<<end_till_now<<endl;
    }
    return 0;
}
