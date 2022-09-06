/**
 * NESTED RANGES CHECK
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
    for0(i,n)
    {
        ll a,b;
        cin>>a>>b;
        vpp.pb({{a,b},i});
    }
    sort(bend(vpp),sorter);
 //   for(auto x:vpp)cout<<x.fi.fi<<" "<<x.fi.se<<endl;    
    bool contains[n];
    bool contained[n];
    for(int i=0;i<n;i++)
    {
        contains[i]=0;
        contained[i]=0;
    }
    int maxright =0;
    for(int i=0;i<n;i++)
    {
        if(vpp[i].fi.se <= maxright){
            contained[vpp[i].se] = 1;
        }
        maxright = max(vpp[i].fi.se,maxright);
    }
    int minleft = INT_MAX;
    for(int i = n-1; i>=0; i--)
    {
        if(vpp[i].fi.se >= minleft)
        {
            contains[vpp[i].se] = 1;
        }
        minleft = min(vpp[i].fi.se,minleft);
    }
    for(auto x:contains)cout<<x<<" ";
        cout<<endl;
    for(auto x:contained)cout<<x<<" ";
    return 0;
}