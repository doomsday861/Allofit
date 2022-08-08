/**
 * 1702A
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
    set<ll> st;
    st.insert(1);
    for(ll i=0;i<=10;i++)
    {
        st.insert(pow(10,i));
    }
testcase{
    ll n;
    cin>>n;
    if(st.count(n))
        cout<<0<<endl;
    else{
    auto diff1 = st.upper_bound(n);
    diff1--;
    cout<<n-*diff1<<endl;
}
}

    return 0;
}
