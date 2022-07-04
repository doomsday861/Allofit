/**
 * atcoder 253_c
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
ll q;
cin>>q;
ll curmax =INT_MIN;
ll curmin = INT_MAX;
set<ll>st;
map<ll,ll>mp;
while(q--)
{
    ll type;
    cin>>type;
    if(type==1)
    {
        ll x;
        cin>>x;
        mp[x]++;
        st.insert(x);
    }
    if(type==2)
    {
        ll x,c;
        cin>>x>>c;
        ll rem = min(c,mp[x]);
        mp[x] -=rem;
        if(mp[x]==0)
            st.erase(x);
    }
    if(type==3)
    {
        ll f = *st.begin();
        ll s = *st.rbegin();
        cout<<s-f<<endl;
    }
}


    return 0;
}
