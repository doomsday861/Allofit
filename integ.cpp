/**
 * replace it!
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
ll solve(ll n)
    {
        if(n==1)
            return 0;
        if(n&1 ^1)
            return 1 + solve(n/2);
        if(n&1)
        {
            return 1 + min(solve(n+1),solve(n-1));
        }
        return -1;
    }
ll ans(ll n) {
      return solve(n*1LL);
    }
int main()
{
    run
    ll n;
    cin>>n;
    cout<<ans(n);

    return 0;
}
