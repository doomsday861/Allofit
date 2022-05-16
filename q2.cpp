/**
 * q2
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
multiset<ll> setter(vector<ll> &v)
{
    multiset<ll> st;
    for(auto x: v)
        st.insert(x);
    
    return st;
}
int main()
{
    run
testcase{
    ll n,p;
    cin>>n>>p;
    vector<vll>v(n);
    bool f=0;
    ll maxi =0;
    for0(i,n)
    {
        maxi =0;
        for0(j,p)
        {
            ll x;
            cin>>x;
            v[i].pb(x);
            //maxi = max(maxi,v[i][j]);
            //mt[i].pb(x);
        }
       // sort(bend(v[i]));
    }
    ll cnt=0;
    ll cur = 0;
    for0(i,n)
    {
        multiset<ll> st = setter(v[i]);
        for0(j,p)
        {
            auto cum = st.lower_bound(cur);
            cnt += abs(cur-*cum);
            cur = *cum;
            //cur = x;
            cout<<*cum<<" ";
            st.erase(st.lower_bound(cur));
            // cout<<v[i][cum]<<" ";
        }
        cout<<endl;
    }
    cout<<cnt<<endl;
    
}

    return 0;
}
