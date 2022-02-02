/**
 * 1632B
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
ll counter(ll n)
{
    ll x =0;
    for(ll i= 31;i>=0;i--)
    {
        if((n>>i)&1)
        {
            x =i;
            break;
        }
    }
    return x;
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    ll ans = n-1;
    ll leftmost = counter(ans);
    ll mid = (1<<leftmost);
    for(ll i=n-1;i>=mid;i--)
    {
        cout<<i<<" ";
    }
    for0(i,mid)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //cout<<ans<<endl;
}

    return 0;
}
