/**
 * kick2
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
    ll cnt=1;
testcase{
    ll l,r,ans;
    cin>>l>>r;
    ll n = min(l,r);
    ans = (n*(n+1))/2;
    cout<<"Case #"<<cnt++<<": "<<ans<<endl;
}

    return 0;
}
