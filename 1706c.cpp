/**
 * 1706C
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
testcase{
    ll n;
    cin>>n;
    vll v(n+1);
    for0(i,n)cin>>v[i];
    vll pref(n);
    for (int i = 1; i < n - 1; i++) {
      pref[i] = pref[i - 1];
      if (i % 2 == 1) {
        int goal = max(v[i - 1], v[i + 1]) + 1;
        int need = max(0LL, goal - v[i]);
        pref[i] += need;
      }
    }
    vll suf(n);
    for (int i = n - 2; i >= 1; i--) {
      suf[i] = suf[i + 1];
      if (i % 2 == (n - 2) % 2) {
        int goal = max(v[i - 1], v[i + 1]) + 1;
        int need = max(0LL, goal - v[i]);
        suf[i] += need;
      }
    }
    if (n % 2 == 1) {
      cout << pref[n - 2] << '\n';
    } else {
      long long ans = (long long) 1e18;
      for (int i = 1; i < n; i += 2) {
        ans = min(ans, pref[i - 1] + suf[i]);
      }
      cout << ans << '\n';
    }
  }
        

    return 0;
}
