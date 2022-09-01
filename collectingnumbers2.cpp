/**
 * collecting numbers 2
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
    ll n,m;
    cin>>n>>m;
    int idx[n+1];
    int v[n+1];
    for1(i,n)
    {
        ll x;
        cin>>x;
        v[i] = x;
        idx[x] = i;
    }
    idx[0] =0;
    v[0] =0;
    ll c=1;
    for(ll i=1;i<n;i++)
    {
        if(idx[i]>idx[i+1])c++;
    }
    set<pair<int,int>>st;
    while(m--)
    {
        ll l,r;
        cin>>l>>r;
        if(v[l]+1<=n)
        {
            st.insert({v[l],v[l]+1});
        }
        if(v[l]-1 >=1)
        {
            st.insert({v[l]-1,v[l]});
        }
        if(v[r]+1<=n)
        {
            st.insert({v[r],v[r]+1});
        }
        if(v[r]-1 >=1)
        {
            st.insert({v[r]-1,v[r]});
        }
        for(auto x:st)
        {
            c -= idx[x.fi] > idx[x.se];
        }        
        swap(v[l],v[r]);
        idx[v[l]] = l;
        idx[v[r]] = r;
        for(auto x:st)
        {
            c += idx[x.fi] > idx[x.se];
        } 
        cout<<c<<endl;
        st.clear();
    }

    return 0;
}
