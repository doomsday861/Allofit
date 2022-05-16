/**
 * 1679B
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
ll n,q;
cin>>n>>q;
vll v(n);
ll cursum =0;
for0(i,n)
{
    cin>>v[i];
    cursum +=v[i];
}
bool hasallchanged=0;
ll prevval=-1;
set<ll> st;
while(q--)
{
    ll x;
    cin>>x;
    if(x==2)
    {
        ll val;
        cin>>val;
        cursum = n*val;
        prevval = val;
        hasallchanged = 1;
        st.clear();
        cout<<cursum<<'\n';
    }
    if(x==1)
    {
        ll i,val;
        cin>>i>>val;
        i--;
        if(st.count(i))
        {
            cursum -= v[i];
            cursum +=val;
        }
        else
        {
            if(prevval==-1)
            {
                cursum -=v[i];
                cursum +=val;
            }
            else
            {
                cursum -= prevval;
                cursum +=val;
            }
        }
        st.insert(i);
        v[i] = val;
        cout<<cursum<<endl;
    }
 
}

    return 0;
}
