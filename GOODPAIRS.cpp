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
testcase{
    ll n;
    cin>>n;
    map<pair<ll,ll>,ll>mp;
    vll a(n);
    vll b(n);
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    cin>>b[i];
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        pair<ll,ll> temp = {b[i],a[i]};
        if(mp.find(temp)!=mp.end())
        {
            ans += mp[temp];
        }
        mp[{a[i],b[i]}]++;
    }
    cout<<ans<<endl;
    
}

    return 0;
}
