/**
 * try
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
using namespace std;

vector<ll> st;
struct segtree{
    ll n;
    void init(ll _n)
    {
        this->n = _n;
        st.resize(4*n,0);
    }
    void build(ll start, ll ending, ll node, vector<ll>v)
    {
        if(start == ending)
            {
                st[node] = v[start];
                return;
            }
        ll mid = (start+ending)/2;
        build(start,mid,2*node+1,v);
        build(mid+1,ending,2*node+2,v);
        st[node] = st[node*2+1] + st[node*2+2];
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
    void update(ll start, ll ending, ll node, ll index, ll value)
    {
        if(start==ending)
        {
            st[node] = value;
            return;
        }
        ll mid = (start+ending)/2;
        if(index <=mid)
        {
            update(start,mid,2*node+1,index,value);
        }
        else
        {
            update(mid,ending,2*node+2,index,value);
        }
        st[node] = st[node*2+1] + st[node*2+2];
        return;
    }
    void build(vector<ll> v) {
        build(0, n - 1, 0, v);
    }

    ll query(ll l, ll r) {
        cout<<"qe";
        return query(0, n - 1, l, r, 0);
    }

    void update(ll x, ll y) {
        update(0, n - 1, 0, x, y);
    }
};
int main()
{
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll rot=0;
    while(q--)
    {
        ll t,x;
        cin>>t>>x;
        if(t==1)
        {
            rot+=x;
        }
        if(t==2)
        {
            rot = rot%n;
            x--;
            cout<<s[((x-rot)+n)%n]<<endl;;
        }
    }
    
}
