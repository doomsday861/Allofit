/**
 * 1631B
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
using namespace std;
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vll v(n+1);
    unordered_set<ll> st;
    for1(i,n) {
        cin>>v[i];
        st.insert(v[i]);
    }
    if(st.size()==1)
    {
        cout<<0<<endl;
        continue;
    }
    else
    {
        ll ans=0;
        ll k=0,counter=0;
        for(ll i=n; i>0;i--)
        {
            if(v[i]==v[n])
            {
                k++;
            }
            else
            {
                k *=2;
                ans++;
                i = n-k+1;
            }
        }
        cout<<ans<<endl;
    }
}

    return 0;
}
