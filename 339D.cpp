/**
 * 339D
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
vector<ll> st;
    ll sz;
struct segtree{
    ll n;
    void init(ll _n)
    {
        this->n = _n;
        st.resize(4 * n,0);
    }
    void build(ll start, ll ending, ll node, vector<ll>&v,bool f)
    {
        if(start == ending)
            {
                st[node] = v[start];
                return;
            }
        ll mid = (start+ending)/2;
        build(start,mid,2*node+1,v,f^1);
        build(mid+1,ending,2*node+2,v,f^1);
        if(f)
        st[node] = st[node*2+1] ^ st[node*2+2];
        else
        st[node] = st[node*2+1] | st[node*2+2];
    }
    ll query(ll start, ll ending, ll l, ll r, ll node)
    {
        if(start > r || ending <l)
            return 0;
        if(start >=l && ending <=r)
            return st[node];
        ll mid = (start+ending)/2;
        ll q1 = query(start,mid,l,r,2*node+1);
        ll q2 = query(mid,ending,l,r,2*node+2);
        return q1+q2;
    }
    void update(ll start, ll ending, ll node, ll index, ll value, bool f)
    {
        if(start==ending)
        {
            st[node] = value;
            return;
        }
        ll mid = (start+ending)/2;
        if(index <=mid)
        {
            update(start,mid,2*node+1,index,value, f^1);
        }
        else
        {
            update(mid+1,ending,2*node+2,index,value,f^1);
        }
        if(f)
        st[node] = st[node*2+1] ^ st[node*2+2];
        else
        st[node] = st[node*2+1] | st[node*2+2];
        return;
    }
    void build(vector<ll> &v) {
        if(sz&1)
        build(0, n - 1, 0, v, 0);
        else
        build(0, n - 1, 0, v, 1);
    }

    ll query(ll l, ll r) {
        return query(0, n - 1, l, r, 0);
    }

    void update(ll x, ll y) {
        if(sz&1)
        update(0, n - 1, 0, x, y, 0);
        else
        update(0, n - 1, 0, x, y, 1);
    }
};
int main()
{
    run
    ll n,q;
    cin>>n>>q;
    vll v(pow(2,n));
    for0(i,pow(2,n)) cin>>v[i];
    segtree seg;
    sz = n;
    seg.init(pow(2,n));
    seg.build(v);
    // for(auto x:st)cout<<x<<" ";
    //     cout<<endl;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        seg.update(a,b);
        cout<<st[0]<<endl;
    }
    
    return 0;
}
