/**
 * 1703F
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

int main() {
    
run
    
    ll t, n, moves;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll arr[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        vector<ll> suff(n + 1, 0), pref(n + 1, 0);
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (arr[i] < i)
            {
                if (arr[i] > 0)
                    ans += pref[arr[i] - 1];
                pref[i]++;
            }
            pref[i] += pref[i - 1];
        }
        cout << ans << "\n";
    }
    return 0;
}
