/**
 * 1702C
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
testcase{
    ll n,q;
    cin>>n>>q;
    vll v(n);
    for0(i,n)
    cin>>v[i];
    map<ll,pair<ll,ll>>mp;
    for0(i,n)
    {
        if(mp.find(v[i])==mp.end())
        {
            mp[v[i]] = {i,i};
        }
        else
        {
            mp[v[i]].second = i;
        }
    }
    while(q--)
    {
        ll u,v;
        cin>>u>>v;
        if(mp.find(u)==mp.end() or mp.find(v)==mp.end())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(mp[u].first < mp[v].second)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    
}

    return 0;
}
